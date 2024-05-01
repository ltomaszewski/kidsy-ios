//
//  IntroViewNavigationStackState.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 28/04/2024.
//

import Foundation

struct IntroViewNavigationStackState : NavigationStackState {
    static func == (lhs: IntroViewNavigationStackState, rhs: IntroViewNavigationStackState) -> Bool {
        lhs.headlineText == rhs.headlineText
    }
    
    let backgroundImageName: String = "background_question_blue"
    let headlineText: String
    let submitText: String
    let alreadyHaveAnAccountText: String
    let onStartForFree: () -> Void  // Closure for handling tap action
    let onLogin: () -> Void  // Closure for handling tap action

    func hash(into hasher: inout Hasher) {
        hasher.combine(headlineText)
        hasher.combine(submitText)
        hasher.combine(alreadyHaveAnAccountText)
    }
}
