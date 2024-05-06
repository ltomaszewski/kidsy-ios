//
//  RootNavigationView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI
import shared

struct RootNavigationView: View {
    @StateObject var viewModel = RootNavigationViewModel()
    
    var body: some View {
        ZStack {
            Image(viewModel.backgroundImageNaem)
                .resizable()
                .ignoresSafeArea(.all, edges: .top)
            VStack {
                if (viewModel.progress != -1) {
                    ProgressBar(value: viewModel.progress)
                        .frame(height: 5)
                        .padding(.top)
                        .padding(.horizontal)
                }
                NavigationStack(path: $viewModel.path) {
                    VStack {
                        Text("Root")
                    }
                    .navigationDestination(for: IntroViewNavigationStackState.self) { state in
                        IntroView(state: state)
                    }
                    .navigationDestination(for: OnboardingViewNavigationStackState.self) { state in
                        OnboardingView(state: state)
                    }
                }
            }
        }
    }
}

#Preview {
    RootNavigationView()
}
