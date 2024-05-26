//
//  LetsBeginWithPlanViewNavigationStackState.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import Foundation

struct LetsBeginWithPlanViewNavigationStackState : NavigationStackState {
    static func == (lhs: LetsBeginWithPlanViewNavigationStackState, rhs: LetsBeginWithPlanViewNavigationStackState) -> Bool {
        return lhs.headlineText == rhs.headlineText && lhs.headlineBottomText == rhs.headlineBottomText
    }
    
    let backgroundImageName: String = "background_question_blue"
    let headlineText: String
    let headlineBottomText: String
    let programCardTitle: String
    let programCardSubTitle: String
    let programCardDecorativeGraphic: String
    let programCardSubmit: String
    let onBegin: () -> Void  // Closure for handling tap action
    let onClose: () -> Void  // Closure for handling tap action


    func hash(into hasher: inout Hasher) {
        hasher.combine(headlineText)
        hasher.combine(headlineBottomText)
    }
}
