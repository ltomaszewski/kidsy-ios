//
//  OnboardingViewNavigationStackState.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 28/04/2024.
//

import SwiftUI
import shared

struct OnboardingViewNavigationStackState : NavigationStackState {
    static func == (lhs: OnboardingViewNavigationStackState, rhs: OnboardingViewNavigationStackState) -> Bool {
        lhs.onboardingScreenState.index == rhs.onboardingScreenState.index
    }
    
    let backgroundImageName: String = "background_question_green"
    let onboardingScreenState: OnboardingScreenState
    let onUserAction: (UserAction) -> ()
    
    func hash(into hasher: inout Hasher) {
        hasher.combine(onboardingScreenState.index)
    }
}
