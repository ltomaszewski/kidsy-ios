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
        VStack {
            Spacer()
            
            // Illustration
            Image("kido_him") // Replace "kido_him" with your actual image name
                .resizable()
                .aspectRatio(contentMode: .fit)
                .frame(width: 200, height: 200)
                .background(Circle().fill(Color.blue.opacity(0.3)))
                .overlay(Circle().stroke(Color.gray, lineWidth: 2))
            
            Text(state.headlineText)
                .font(.system(size: 24))
                .foregroundColor(.black)
                .multilineTextAlignment(.center)
                .padding()
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
        .background(Color.white) // Assuming a white background
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
