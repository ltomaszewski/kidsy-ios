//
//  OnboardingPushNotificationsPromptView+ViewModel.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 09/05/2024.
//

import Foundation
import UserNotifications

extension OnboardingPushNotificationsPromptView {
    class ViewModel: ObservableObject {
        
        let state: OnboardingViewNavigationStackState
        
        var headlineTopText: String { state.onboardingScreenState.currentScreenModel.headlineTop ?? "" }
        var headlineText: String { state.onboardingScreenState.currentScreenModel.headline }
        var headlineBottomText: String { state.onboardingScreenState.currentScreenModel.headlineBottom ?? "" }
        var headlineBottomTextImageName: String { state.onboardingScreenState.currentScreenModel.headlineBottomImageName ?? "" }
        var bottomText: String { state.onboardingScreenState.currentScreenModel.submitTop ?? "" }
        var submitText: String { state.onboardingScreenState.currentScreenModel.submit ?? "" }
        var onPermissionResponse: (Bool) -> Void // Returns true if notification were allowed, false if not
        
        init(state: OnboardingViewNavigationStackState,
             onPermissionResponse: @escaping (Bool) -> Void) {
            self.state = state
            self.onPermissionResponse = onPermissionResponse
        }
        
        func requestNotifications() {
            UNUserNotificationCenter.current().requestAuthorization(options: [.alert, .badge, .sound]) { granted, error in
                DispatchQueue.main.async {
                    self.onPermissionResponse(granted)
                }
            }
        }
    }
}
