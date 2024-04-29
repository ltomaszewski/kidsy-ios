//
//  RootNavigationViewModel.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import Combine
import SwiftUI
import shared

final class RootNavigationViewModel: ObservableObject {
    @Published var path = NavigationPath()
    private let appStateManager = KidsyStateManager()
    private var screenStateObserver: Closeable?
    
    init() {
        screenStateObserver = appStateManager.screenState.watch { [weak self] screenState in
            self?.show(screenState)
        }
    }
    
    deinit {
        screenStateObserver?.close()
    }
    
    func executeUserAction(userAction: UserAction) {
        appStateManager.executeAction(action: userAction)
    }
    
    func show<V>(_ state: V) where V: ScreenState {
        switch state {
        case let introState as IntroScreenState:
            let introNavigationStackState = IntroViewNavigationStackState(headlineText: introState.headline,
                                                                          submitText: introState.startForFree,
                                                                          alreadyHaveAnAccountText: introState.alreadyHaveAnAccount,
                                                                          onStartForFree: { [weak self] in self?.executeUserAction(userAction: IntroScreenState.Action.startForFree) },
                                                                          onLogin: { [weak self] in self?.executeUserAction(userAction: IntroScreenState.Action.logIn) })
            path.append(introNavigationStackState)
        case let onboardingState as OnboardingScreenState:
            let onboardingNavigationStackState = OnboardingViewNavigationStackState(onboardingScreenState: onboardingState,
                                                                                    onUserAction:  { [weak self] in self?.executeUserAction(userAction: $0) })
            path.append(onboardingNavigationStackState)
        default:
            break;
        }
    }
    
    func popToRoot() {
        path.removeLast(path.count)
    }
}
