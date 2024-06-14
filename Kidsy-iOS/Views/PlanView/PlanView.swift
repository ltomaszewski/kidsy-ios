//
//  PlanView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import SwiftUI
import shared

struct PlanView: View {
    let state: PlanViewNavigationStackState
    @State var showInitState = true
    
    var body: some View {
        ZStack {
            Image(state.backgroundImageName)
                .resizable()
                VStack {
                    if showInitState && state.planScreenState.index == 0 {
                        PlanStartView(navigationBarText: state.planScreenState.planModel.navigationBarTitle ?? "",
                                      imageName: state.planScreenState.planModel.headlineImageName,
                                      headlineText: state.planScreenState.planModel.headline,
                                      headlineBottomText: state.planScreenState.planModel.headlineBottom,
                                      submitText: state.planScreenState.planModel.submit) {
                            withAnimation {
                                showInitState = false
                            }
                        }
                                      .transition(.opacity)
                    } else {
                    switch state.planScreenState.currentScreen.type {
                    case ScreenType.prompt:
                        PlanPromptView(headlineTopText: state.planScreenState.currentScreen.headlineTop ?? "",
                                       headlineText: state.planScreenState.currentScreen.headline,
                                       headlineBottomText: state.planScreenState.currentScreen.headlineBottom ?? "",
                                       headlineBottomTextImageName: state.planScreenState.currentScreen.headlineBottomImageName ?? "",
                                       bottomText: state.planScreenState.currentScreen.submitTop ?? "",
                                       submitText: state.planScreenState.currentScreen.submit ?? "") {
                            state.onUserAction(PlanScreenState.Action(type: .submit, option: nil, text: nil))
                        }
                    case ScreenType.question:
                        PlanQuestionView(question: state.planScreenState.currentScreen.headline,
                                         options: state.planScreenState.swiftUIOptions,
                                         dontKnow: "Don't know") { option in
                            let selectedId = state.planScreenState.swiftUIOptionIdWith(text: option)
                            state.onUserAction(PlanScreenState.Action(type: .submit, option: selectedId, text: nil))
                        } oniDontKnow: {
                            print("I don't know unsupported")
                        }
                    default:
                        Text("Unknown screen \(state.planScreenState.currentScreen.type)")
                    }
                }
            }
                .padding(.horizontal)
                .transition(.opacity)
        }
        .navigationBarBackButtonHidden(true)
    }
}

extension PlanScreenState {
    var swiftUIOptions: [String] {
        self.currentScreen.options.map { $0.text }
    }
    
    var swiftUIOptionsWithImage: [String : UIImage] {
        self.currentScreen.options.reduce(into: [String: UIImage]()) { (dict, object) in
            guard let imageName = object.imageName else { return }
            dict[object.text] = UIImage(named: imageName)
        }
    }
    
    func swiftUIOptionIdWith(text: String) -> KotlinInt {
        guard let option = self.currentScreen.options.first(where: { $0.text == text }) else {
            fatalError("Invalid option")
        }
        return KotlinInt(int: option.id)
    }
}

