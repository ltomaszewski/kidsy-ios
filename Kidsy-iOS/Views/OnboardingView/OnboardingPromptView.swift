//
//  OnboardingPromptView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct OnboardingPromptView: View {
    let headlineText: String
    let bottomText: String
    var onTap: () -> Void  // Closure for handling tap action
    
    var body: some View {
        VStack {
            Spacer()
            Text(headlineText)
                .font(.sfTitle())
                .multilineTextAlignment(.center)
            Spacer()
            Text(bottomText)
                .font(.sfBottomDescription())
                .foregroundColor(KidsyColors.mediumGray)
        }
        .padding(.bottom)
        .onTapGesture {
            self.onTap()  // Call the provided closure when the tap is detected
        }
    }
    
}

#Preview {
    OnboardingPromptView(headlineText: "Answer a few questions to start personalizing your experience.",
                         bottomText: "Tap anywhere to continue",
                         onTap: {})
}
