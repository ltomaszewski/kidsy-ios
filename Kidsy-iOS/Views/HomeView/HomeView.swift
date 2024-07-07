//
//  HomeView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 02/07/2024.
//

import SwiftUI
import shared

struct HomeView: View {
    @Binding var navigationStackState: HomeViewNavigationStackState
    @State private var selectedItem = 0
    let onTabChange: (Int) -> ()
    
    var body: some View {
        TabView(selection: $selectedItem,
                content:  {
            ForEach(navigationStackState.tabs, id: \.name) { tab in
                if (tab.state == HomeTabBarScreenState.State.today) {
                    TodayView(navigationStackState: $navigationStackState)
                        .tabItem {
                            Label(
                                tab.name,
                                image: tab.imageName
                            )
                        }
                        .tag(tab.tag)
                } else if (tab.state == HomeTabBarScreenState.State.plans) {
                    PlansView(navigationStackState: $navigationStackState)
                        .tabItem {
                            Label(
                                tab.name,
                                image: tab.imageName
                            )
                        }
                        .tag(tab.tag)
                } else if (tab.state == HomeTabBarScreenState.State.single) {
                    SingleView(navigationStackState: $navigationStackState)
                        .tabItem {
                            Label(
                                tab.name,
                                image: tab.imageName
                            )
                        }
                        .tag(tab.tag)
                } else if (tab.state == HomeTabBarScreenState.State.schedule) {
                    ScheduleView(navigationStackState: $navigationStackState)
                        .tabItem {
                            Label(
                                tab.name,
                                image: tab.imageName
                            )
                        }
                        .tag(tab.tag)
                } else if (tab.state == HomeTabBarScreenState.State.profile) {
                    ProfileView(navigationStackState: $navigationStackState)
                        .tabItem {
                            Label(
                                tab.name,
                                image: tab.imageName
                            )
                        }
                        .tag(tab.tag)
                } else {
                    fatalError("Unsupported tab")
                }
            }
        })
        .onChange(of: selectedItem, { oldValue, newValue in
            onTabChange(newValue)
        })
        .navigationBarBackButtonHidden(true)
    }
}

#Preview {
    HomeView(navigationStackState: .init(get: {
        .init(state: .init(state: .today))
    }, set: { _ in
        
    })) { _ in
        
    }
}
