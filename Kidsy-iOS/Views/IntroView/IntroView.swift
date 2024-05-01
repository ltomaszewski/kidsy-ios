//
//  IntroView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct IntroView: View {
    let state: IntroViewNavigationStackState
    
    var body: some View {
        ZStack {
            Image(state.backgroundImageName)
                .resizable()
                .ignoresSafeArea(.all, edges: .top)
            VStack {
                Spacer()
                // Illustration
                Image("kido_him") // Replace "kido_him" with your actual image name
                    .resizable()
                    .frame(width: 200, height: 200)
                
                Text(state.headlineText)
                    .font(.sfTitle())
                    .lineSpacing(10)
                    .foregroundColor(.black)
                    .multilineTextAlignment(.center)
                    .padding(.minimum(64, 48))
                
                Spacer()

                // Start for free button
                BlackButton(title: state.submitText,
                            action: state.onStartForFree)
                .padding(.bottom)
                
                // Login button
                Button(action: {
                    // Handle the action here
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
    IntroView(state: .init(headlineText: "Science based parent program that adapts to your kid.",
                           submitText: "Start for free",
                           alreadyHaveAnAccountText: "Already have an account? Log in",
                           onStartForFree: {},
                           onLogin: {})
    )
}
