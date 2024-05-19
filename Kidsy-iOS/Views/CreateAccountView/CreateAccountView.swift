//
//  CreateAccountView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 17/05/2024.
//

import SwiftUI
import AuthenticationServices
import shared

// Future me: Apple sign in do not allow for logout. It is only possible via settings menu inside iCloud profile page. Open Sign-In & Security, Sign in with Apple,

struct CreateAccountView: View {
    let state: CreateAccountViewNavigationStackState
    
    var body: some View {
        ZStack {
            Image(state.backgroundImageName)
                .resizable()
                .ignoresSafeArea(.all, edges: .top)
            VStack {
                Spacer()
                SignInWithAppleButton(
                    .signUp,
                    onRequest: { request in
                        // Configure the request here if needed
                        request.requestedScopes = [.fullName, .email]
                    },
                    onCompletion: { result in
                        switch result {
                        case .success(let authorization):
                            handleAuthorization(authorization)
                        case .failure(let error):
                            print("Authorization failed: \(error.localizedDescription)")
                        }
                    }
                )
                .signInWithAppleButtonStyle(.black)
                .frame(width: 280, height: 60)
                Spacer()
                Text(state.bottomText)
                    .font(.sfBottomDescription())
                    .multilineTextAlignment(.center)
                    .foregroundColor(KidsyColors.mediumGray)
            }
            .padding(.horizontal)
        }        
        .navigationBarBackButtonHidden(true)
    }
    
    func handleAuthorization(_ authorization: ASAuthorization) {
        switch authorization.credential {
        case let appleIDCredential as ASAuthorizationAppleIDCredential:
            let userIdentifier = appleIDCredential.user
            let fullName = appleIDCredential.fullName
            let email = appleIDCredential.email
            
            state.onAppleLogin(userIdentifier, fullName?.givenName ?? "", email ?? "")
        default:
            break
        }
    }
}

#Preview {
    CreateAccountView(
        state: .init(
            bottomText: "By creating your account, you agree to Kidsy’s Terms & Conditions and Privacy Policy.",
            onAppleLogin: { _, _, _ in }
        )
    )
}
