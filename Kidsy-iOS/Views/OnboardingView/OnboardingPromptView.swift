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
                .font(.title)
                .multilineTextAlignment(.center)
                .padding()
            Spacer()
            Text(bottomText)
                .font(.subheadline)
                .foregroundColor(Color(red: 0.4588235294117647, green: 0.4588235294117647, blue: 0.4588235294117647))
                .padding(.bottom)
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
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
