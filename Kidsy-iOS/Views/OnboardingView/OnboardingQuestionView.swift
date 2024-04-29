//
//  OnboardingQuestionView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct OnboardingQuestionView: View {
    let question: String
    let options: [String]
    let onSelectOption: (String) -> ()
    
    var body: some View {
        VStack {
            Spacer()
            Text(question)
                .font(.sfTitle())
                .multilineTextAlignment(.center)
                .padding()
            
            // Create a BlackButton for each option
            ForEach(options, id: \.self) { option in
                BlackButton(title: option) {
                    onSelectOption(option)
                }
            }
            Spacer()
        }
    }
}

#Preview {
    OnboardingQuestionView(question: "Select your top priority", options: ["Sleep", "Health"], onSelectOption: { _ in })
}
