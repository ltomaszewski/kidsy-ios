//
//  OnboardingPushNotificationsPromptView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 09/05/2024.
//

import SwiftUI

struct OnboardingPushNotificationsPromptView: View {
    @ObservedObject private var viewModel: OnboardingPushNotificationsPromptView.ViewModel
    
    init(viewModel: OnboardingPushNotificationsPromptView.ViewModel) {
        self.viewModel = viewModel
    }
    
    var body: some View {
        ZStack {
            Image(viewModel.state.backgroundImageName)
                .resizable()
            VStack {
                OnboardingPromptView(headlineTopText: viewModel.headlineTopText,
                                     headlineText: viewModel.headlineText,
                                     headlineBottomText: viewModel.headlineBottomText,
                                     headlineBottomTextImageName: viewModel.headlineBottomTextImageName,
                                     bottomText: viewModel.bottomText,
                                     submitText: viewModel.submitText) {
                    viewModel.requestNotifications()
                }
            }
            .padding(.horizontal)
        }
        .navigationBarBackButtonHidden(true)
    }
}
