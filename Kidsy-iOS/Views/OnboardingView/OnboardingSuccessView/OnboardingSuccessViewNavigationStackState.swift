//
//  OnboardingSuccessViewNavigationStackState.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 12/05/2024.
//

import Foundation

struct OnboardingSuccessViewNavigationStackState: NavigationStackState {
    static func == (lhs: OnboardingSuccessViewNavigationStackState, rhs: OnboardingSuccessViewNavigationStackState) -> Bool {
        lhs.headlineBottomText == rhs.headlineBottomText
    }
    
    let backgroundImageName: String = "background_question_green"
    let headlineImageName: String
    let headlineBottomText: String
    let submitText: String
    let alreadyHaveAnAccountText: String
    var onCreateAccount: () -> Void
    var onLogin: () -> Void
    
    func hash(into hasher: inout Hasher) {
        hasher.combine(headlineImageName)
        hasher.combine(headlineBottomText)
        hasher.combine(submitText)
    }
}
