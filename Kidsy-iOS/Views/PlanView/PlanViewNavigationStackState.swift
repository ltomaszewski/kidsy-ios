//
//  PlanViewNavigationStackState.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import SwiftUI
import shared

struct PlanViewNavigationStackState : NavigationStackState {
    static func == (lhs: PlanViewNavigationStackState, rhs: PlanViewNavigationStackState) -> Bool {
        lhs.planScreenState.index == rhs.planScreenState.index
    }
    
    let backgroundImageName: String = "background_question_green"
    let planScreenState: PlanScreenState
    let onUserAction: (UserAction) -> ()
    
    func hash(into hasher: inout Hasher) {
        hasher.combine(planScreenState.index)
    }
}
