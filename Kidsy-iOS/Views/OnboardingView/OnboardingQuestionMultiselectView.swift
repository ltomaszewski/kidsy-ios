//
//  OnboardingQuestionMultiselectView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct OnboardingQuestionMultiselectView: View {
    let questionText: String
    let submitText: String
    let options: [String]
    let onSelectOption: ([String]) -> ()
    
    @State private var selectedOptions: Set<String> = [] // Track selected options using a Set
    
    var body: some View {
        VStack {
            Spacer()
            Text(questionText)
                .font(.title)
                .multilineTextAlignment(.center)
                .padding()
            
            ForEach(options, id: \.self) { option in
                ToggleGrayButton(title: option,
                                 action: {
                    if self.selectedOptions.contains(option) {
                        self.selectedOptions.remove(option)
                    } else {
                        self.selectedOptions.insert(option)
                    }
                }
                )
                .padding(.bottom, 8) // Add some spacing between buttons
            }
            
            Spacer()
            // Conditionally display the black button only if selectedOptions is not empty
            if !selectedOptions.isEmpty {
                BlackButton(title: submitText) {
                    onSelectOption(Array(selectedOptions)) // Pass the selected options when tapped
                }
                .padding(.bottom)
            }
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(Color.white)
    }
}

#Preview {
    OnboardingQuestionMultiselectView(questionText: "Question 1",
                                      submitText: "Submit Text",
                                      options: ["A", "B", "C"], onSelectOption: { _ in })
}
