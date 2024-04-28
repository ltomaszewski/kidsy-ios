//
//  OnboardingView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI
import shared

struct OnboardingView: View {
    let onboardingScreenState: OnboardingScreenState
    let onUserAction: (UserAction) -> ()
    
    var body: some View {
        NavigationView {
            switch onboardingScreenState.currentScreenModel.type {
            case OnboardingScreenType.prompt:
                OnboardingPromptView(headlineText: onboardingScreenState.currentScreenModel.headline,
                                     bottomText: onboardingScreenState.currentScreenModel.submitTop ?? "-1") {
                    onUserAction(OnboardingScreenState.Action(type: .submit, option: nil))
                }
            case OnboardingScreenType.question:
                OnboardingQuestionView(question: onboardingScreenState.currentScreenModel.headline,
                                       options: onboardingScreenState.swiftUIOptions) { selected in
                    let selectedId = onboardingScreenState.swiftUIOptionIdWith(text: selected)
                    onUserAction(OnboardingScreenState.Action(type: .submit, option: selectedId))
                }
            case OnboardingScreenType.questionmultiselect:
                OnboardingQuestionMultiselectView(questionText: onboardingScreenState.currentScreenModel.headline,
                                                  submitText: onboardingScreenState.currentScreenModel.submit ?? "-1",
                                                  options: onboardingScreenState.swiftUIOptions,
                                                  onSelectOption: { _ in
                    
                })
            default:
                Text("Unknown screen")
            }
        }
    }
}

extension OnboardingScreenState {
    var swiftUIOptions: [String] {
        self.currentScreenModel.options.map { $0.text }
    }
    
    func swiftUIOptionIdWith(text: String) -> KotlinInt {
        guard let onboardingOption = self.currentScreenModel.options.first(where: { $0.text == text }) else {
            fatalError("Invalid option")
        }
        return KotlinInt(int: onboardingOption.id)
    }
}

#Preview {
    OnboardingView(onboardingScreenState: .init(jsonInput: OnboardingScreenState.companion.JSON_INPUT,
                                                state: .onboarding,
                                                index: 0,
                                                selectedOptions: []),
                   onUserAction: { _ in })
}
