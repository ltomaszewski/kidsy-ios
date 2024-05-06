//
//  OnboardingTextInputView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 06/05/2024.
//

import SwiftUI

struct OnboardingTextInputView: View {
    enum FocusField: Hashable {
        case field
    }
    
    @FocusState private var focusedField: FocusField?
    
    let headlineText: String
    let placeholderText: String
    let submitText: String
    @State private var inputText = ""
    let onSubmitText: (String) -> ()
    
    var body: some View {
        VStack {
            Spacer()
            Text(headlineText)
                .font(.sfTitle())
                .multilineTextAlignment(.center)
                .padding()
            TextField(placeholderText, text: $inputText)
                .focused($focusedField, equals: .field)
                .multilineTextAlignment(.center) // Text input field
                .font(.sfTextInput())
                .padding()
                .tint(.black)// Adds padding around the text field
                .onAppear {
                    self.focusedField = .field
                }
            Spacer()
            BlackButton(title: submitText) {
                onSubmitText(inputText) // Pass the selected options when tapped
            }
            .opacity(inputText.isEmpty ? 0.0 : 1.0)
            .animation(.easeInOut(duration: 0.3), value: inputText.isEmpty)
            .padding(.bottom)
        }
    }
}

#Preview {
    OnboardingTextInputView(headlineText: "Text Headline",
                            placeholderText: "name",
                            submitText: "continue") { _ in }
}
