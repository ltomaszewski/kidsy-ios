//
//  OnboardingView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI
import shared

struct OnboardingView: View {
    let state: OnboardingViewNavigationStackState
    
    var body: some View {
        ZStack {
            Image(state.backgroundImageName)
                .resizable()
            VStack {
                switch state.onboardingScreenState.currentScreenModel.type {
                case OnboardingScreenType.prompt:
                    OnboardingPromptView(headlineText: state.onboardingScreenState.currentScreenModel.headline,
                                         bottomText: state.onboardingScreenState.currentScreenModel.submitTop ?? "-1") {
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: nil))
                    }
                case OnboardingScreenType.question:
                    OnboardingQuestionView(question: state.onboardingScreenState.currentScreenModel.headline,
                                           options: state.onboardingScreenState.swiftUIOptions) { selected in
                        let selectedId = state.onboardingScreenState.swiftUIOptionIdWith(text: selected)
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: selectedId))
                    }
                case OnboardingScreenType.questionmultiselect:
                    OnboardingQuestionMultiselectView(questionText: state.onboardingScreenState.currentScreenModel.headline,
                                                      submitText: state.onboardingScreenState.currentScreenModel.submit ?? "-1",
                                                      options: state.onboardingScreenState.swiftUIOptions,
                                                      onSelectOption: { _ in },
                                                      onSubmitOption: { options in
                        for option in options {
                            let selectedId = state.onboardingScreenState.swiftUIOptionIdWith(text: option)
                            state.onUserAction(OnboardingScreenState.Action(type: .select, option: selectedId))
                        }
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: nil))
                    })
                default:
                    Text("Unknown screen")
                }
            }
            .padding(.horizontal)

        }
        .navigationBarBackButtonHidden(true)
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
    OnboardingView(state: .init(onboardingScreenState: .init(jsonInput: OnboardingScreenState.companion.JSON_INPUT,
                                                             state: .onboarding,
                                                             index: 1,
                                                             selectedOptions: []),
                                onUserAction: { _ in }))
}
