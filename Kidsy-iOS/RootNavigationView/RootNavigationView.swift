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
                Text("Parent")
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
