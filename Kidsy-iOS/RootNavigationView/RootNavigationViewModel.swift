//
//  RootNavigationViewModel.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import Combine
import shared

final class RootNavigationViewModel: ObservableObject {
    @Published var screenState: ScreenState = IntroScreenState(state: .start)
    private let appStateManager = KidsyStateManager()
    private var screenStateObserver: Closeable?

    init() {
        screenStateObserver = appStateManager.screenState.watch { [weak self] screenState in
            self?.screenState = screenState
        }
    }
    
    deinit {
        screenStateObserver?.close()
    }
    
    func executeUserAction(userAction: UserAction) {
        appStateManager.executeAction(action: userAction)
    }
}
