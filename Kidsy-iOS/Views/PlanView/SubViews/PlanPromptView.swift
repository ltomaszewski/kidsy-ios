//
//  PlanPromptView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import SwiftUI

struct PlanPromptView: View {
    let headlineTopText: String
    let headlineText: String
    let headlineBottomText: String
    let headlineBottomTextImageName: String
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
                
                if !headlineBottomTextImageName.isEmpty {
                    Image(headlineBottomTextImageName)
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
    PlanPromptView(headlineTopText: "Top headline",
                         headlineText: "Answer a few questions to start personalizing your experience.",
                         headlineBottomText: "Bootom text",
                         headlineBottomTextImageName: "notification_cta",
                         bottomText: "Tap anywhere to continue",
                         submitText: "Continue",
                         onSubmit: {})
}

