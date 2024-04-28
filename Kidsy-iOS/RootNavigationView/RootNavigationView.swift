//
//  RootNavigationView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI
import shared

struct RootNavigationView: View {
    @StateObject var viewModel = RootNavigationViewModel()
    var body: some View {
        NavigationView {
            switch viewModel.screenState {
            case let introState as IntroScreenState:
                IntroView(headlineText: introState.headline,
                          submitText: introState.startForFree,
                          alreadyHaveAnAccountText: introState.alreadyHaveAnAccount,
                          onStartForFree: { viewModel.executeUserAction(userAction: IntroScreenState.Action.startForFree) },
                          onLogin: { viewModel.executeUserAction(userAction: IntroScreenState.Action.logIn) })
            case let onboardingState as OnboardingScreenState:
                OnboardingView(onboardingScreenState: onboardingState,
                               onUserAction: { viewModel.executeUserAction(userAction: $0) })
            default:

                Text("Unknown screen")
            }
        }
    }
}

#Preview {
    RootNavigationView()
}
