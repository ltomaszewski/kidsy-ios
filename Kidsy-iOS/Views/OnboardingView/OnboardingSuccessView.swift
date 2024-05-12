//
//  OnboardingSuccessView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 12/05/2024.
//

import SwiftUI

struct OnboardingSuccessView: View {
    let headlineImageName: String
    let headlineBottomText: String
    let submitText: String
    let alreadyHaveAnAccountText: String
    var onCreateAccount: () -> Void  // Closure for handling tap action
    var onLogin: () -> Void
    
    var body: some View {
        VStack {
            Spacer()
            VStack {
                Image(headlineImageName)
                    .padding(.bottom)
                
                Text(headlineBottomText)
                    .font(.sfButton())
                    .foregroundColor(KidsyColors.mediumGray)
                    .padding(.top)
            }

            Spacer()

            BlackButton(title: submitText) {
                self.onCreateAccount()  // Call the provided closure when the tap is detected
            }
            .padding(.bottom)
            
            // Login button
            Button(action: {
                self.onLogin()
            }) {
                Text(alreadyHaveAnAccountText)
                    .font(.footnote)
                    .foregroundColor(.blue)
            }
            .padding(.bottom, 20)
        }
        .padding(.bottom)
    }
}

#Preview {
    OnboardingSuccessView(headlineImageName: "check",
                          headlineBottomText: "Your program is ready.",
                          submitText: "Create an account",
                          alreadyHaveAnAccountText: "Already have an account? Log in",
                          onCreateAccount: { },
                          onLogin: { })
}
