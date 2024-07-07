//
//  HomeViewNavigationStackState.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 02/07/2024.
//

import Foundation
import shared

struct HomeViewNavigationStackState : NavigationStackState {
    static func == (lhs: HomeViewNavigationStackState, rhs: HomeViewNavigationStackState) -> Bool {
        return lhs.state == rhs.state
    }
    
    struct TabBarItem: Hashable {
        let state: HomeTabBarScreenState.State
        let name: String
        let imageName: String
        let tag: Int
    }
    
    let state: HomeTabBarScreenState
    
    var tabs: [TabBarItem] {
        state
            .tabBarItems
            .enumerated()
            .compactMap { index, tabBarItem in
                .init(
                    state: tabBarItem.tabState,
                    name: tabBarItem.name,
                    imageName: tabBarItem.imageName,
                    tag: index
                )
        }
    }
    
    func hash(into hasher: inout Hasher) {
        hasher.combine(state.screenName)
    }
}
