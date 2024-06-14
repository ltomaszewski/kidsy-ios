//
//  PlanQuestionView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import SwiftUI

struct PlanQuestionView: View {
    let question: String
    let options: [String]
    let dontKnow: String
    let onSelectOption: (String) -> ()
    let oniDontKnow: () -> ()
    
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
            BlackButton(
                title: "I don't know",
                action: {
                    
                },
                isInverted: true)
            Spacer()
        }
    }
}

#Preview {
    PlanQuestionView(
        question: "Select your top priority",
        options: ["Sleep", "Health"],
        dontKnow: "Don't know",
        onSelectOption: { _ in },
        oniDontKnow: { })
}
