//
//  OnboardingPromptView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct OnboardingPromptView: View {
    let headlineTopText: String
    let headlineText: String
    let headlineBottomText: String
    let bottomText: String
    let submitText: String
    var onSubmit: () -> Void  // Closure for handling tap action
    
    var body: some View {
        VStack {
            Spacer()
            VStack {
                if !headlineTopText.isEmpty {
                    Text(headlineTopText)
                        .font(.sfBottomDescription())
                        .foregroundColor(KidsyColors.mediumGray)
                        .padding(.bottom)
                }

                Text(headlineText)
                    .font(.sfTitle())
                    .multilineTextAlignment(.center)
                
                if !headlineBottomText.isEmpty {
                    Text(headlineBottomText)
                        .font(.sfBottomDescription())
                        .foregroundColor(KidsyColors.mediumGray)
                        .padding(.top)
                }
            }

            Spacer()
            if !bottomText.isEmpty {
                Text(bottomText)
                    .font(.sfBottomDescription())
                    .foregroundColor(KidsyColors.mediumGray)
            }
            
            if !submitText.isEmpty {
                BlackButton(title: submitText) {
                    self.onSubmit()  // Call the provided closure when the tap is detected
                }
            }
        }
        .padding(.bottom)
        .onTapGesture {
            if submitText.isEmpty {
                self.onSubmit()  // Call the provided closure when the tap is detected
            }
        }
    }
    
}

#Preview {
    OnboardingPromptView(headlineTopText: "Top headline",
                         headlineText: "Answer a few questions to start personalizing your experience.",
                         headlineBottomText: "Bootom text",
                         bottomText: "Tap anywhere to continue",
                         submitText: "Continue",
                         onSubmit: {})
}
