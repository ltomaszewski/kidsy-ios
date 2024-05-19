//
//  CreateAccountView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 17/05/2024.
//

import Foundation

struct CreateAccountViewNavigationStackState : NavigationStackState {
    static func == (lhs: CreateAccountViewNavigationStackState, rhs: CreateAccountViewNavigationStackState) -> Bool {
        return lhs.bottomText == rhs.bottomText
    }
    
    let backgroundImageName: String = "background_question_blue"
    let bottomText: String
    let onAppleLogin: (_ userIdentifier: String, _ fullName: String, _ email: String) -> Void  // Closure for handling tap action

    func hash(into hasher: inout Hasher) {
        hasher.combine(backgroundImageName)
        hasher.combine(bottomText)
    }
}
