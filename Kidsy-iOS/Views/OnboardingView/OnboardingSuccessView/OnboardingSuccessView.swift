//
//  OnboardingSuccessView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 12/05/2024.
//

import SwiftUI

struct OnboardingSuccessView: View {
    let state: OnboardingSuccessViewNavigationStackState
    
    var body: some View {
        ZStack {
            Image(state.backgroundImageName)
                .resizable()
                .ignoresSafeArea(.all)
            VStack {
                Spacer()
                VStack {
                    Image(state.headlineImageName)
                        .padding(.bottom)
                    
                    Text(state.headlineBottomText)
                        .font(.sfButton())
                        .foregroundColor(KidsyColors.mediumGray)
                        .padding(.top)
                }
                
                Spacer()
                
                BlackButton(title: state.submitText) {
                    state.onCreateAccount()  // Call the provided closure when the tap is detected
                }
                .padding(.bottom)
                
                // Login button
                Button(action: {
                    state.onLogin()
                }) {
                    Text(state.alreadyHaveAnAccountText)
                        .font(.footnote)
                        .foregroundColor(.blue)
                }
                .padding(.bottom, 20)
            }
            .padding(.horizontal)
        }
        .navigationBarBackButtonHidden(true)
    }
}

#Preview {
    OnboardingSuccessView(state: .init(headlineImageName: "check",
                                       headlineBottomText: "Your program is ready.",
                                       submitText: "Create an account",
                                       alreadyHaveAnAccountText: "Already have an account? Log in",
                                       onCreateAccount: { },
                                       onLogin: { }))
}
