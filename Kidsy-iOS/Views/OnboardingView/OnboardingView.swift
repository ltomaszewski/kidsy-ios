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
                    OnboardingPromptView(headlineTopText: state.onboardingScreenState.currentScreenModel.headlineTop ?? "",
                                         headlineText: state.onboardingScreenState.currentScreenModel.headline,
                                         headlineBottomText: state.onboardingScreenState.currentScreenModel.headlineBottom ?? "",
                                         headlineBottomTextImageName: "",
                                         bottomText: state.onboardingScreenState.currentScreenModel.submitTop ?? "",
                                         submitText: state.onboardingScreenState.currentScreenModel.submit ?? "") {
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: nil, text: nil))
                    }
                case OnboardingScreenType.question:
                    OnboardingQuestionView(question: state.onboardingScreenState.currentScreenModel.headline,
                                           options: state.onboardingScreenState.swiftUIOptions) { selected in
                        let selectedId = state.onboardingScreenState.swiftUIOptionIdWith(text: selected)
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: selectedId, text: nil))
                    }
                case OnboardingScreenType.questionmultiselect:
                    OnboardingQuestionMultiselectView(questionText: state.onboardingScreenState.currentScreenModel.headline,
                                                      submitText: state.onboardingScreenState.currentScreenModel.submit ?? "-1",
                                                      options: state.onboardingScreenState.swiftUIOptions,
                                                      onSelectOption: { _ in },
                                                      onSubmitOption: { options in
                        for option in options {
                            let selectedId = state.onboardingScreenState.swiftUIOptionIdWith(text: option)
                            state.onUserAction(OnboardingScreenState.Action(type: .select, option: selectedId, text: nil))
                        }
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: nil, text: nil))
                    })
                case OnboardingScreenType.textinput:
                    OnboardingTextInputView(headlineText: state.onboardingScreenState.currentScreenModel.headline,
                                            placeholderText: state.onboardingScreenState.currentScreenModel.textInputPlaceholder ?? "-1",
                                            submitText: state.onboardingScreenState.currentScreenModel.submit ?? "-1") { text in
                        state.onUserAction(OnboardingScreenState.Action(type: .textInput, option: nil, text: text))
                    }
                case OnboardingScreenType.promptwithdescriptionpoints:
                    OnboardingPromptWithPointsView(headlineText: state.onboardingScreenState.currentScreenModel.headline,
                                                   points: state.onboardingScreenState.swiftUIOptionsWithImage,
                                                   submitTopText: state.onboardingScreenState.currentScreenModel.submitTop ?? "-1",
                                                   submitText: state.onboardingScreenState.currentScreenModel.submit ?? "-1") {
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: nil, text: nil))
                    }
                case OnboardingScreenType.askfornotification:
                    OnboardingPushNotificationsPromptView(viewModel: .init(state: state,
                                                                           onPermissionResponse: { isGranted in
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: 1, text: nil))
                    }))
                case OnboardingScreenType.timeinput:
                    OnboardingTimeInputView(headlineText: state.onboardingScreenState.currentScreenModel.headline,
                                            datePickerCaptionText: state.onboardingScreenState.currentScreenModel.headlineBottom ?? "",
                                            submitText: state.onboardingScreenState.currentScreenModel.submit ?? "") { date in
                        state.onUserAction(OnboardingScreenState.Action(type: .submit, option: nil, text: "\(date.description)"))
                    }
                default:
                    Text("Unknown screen \(state.onboardingScreenState.currentScreenModel.type)")
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
    
    var swiftUIOptionsWithImage: [String : UIImage] {
        self.currentScreenModel.options.reduce(into: [String: UIImage]()) { (dict, object) in
            guard let imageName = object.imageName else { return }
            dict[object.text] = UIImage(named: imageName)
        }
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
                                                             index: 5,
                                                             selectedOptions: []),
                                onUserAction: { _ in }))
}
