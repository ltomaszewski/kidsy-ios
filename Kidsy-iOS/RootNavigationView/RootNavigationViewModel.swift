//
//  RootNavigationViewModel.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import Combine
import SwiftUI
import shared

final class RootNavigationViewModel: ObservableObject {
    @Published var homeViewNavigationStackState: HomeViewNavigationStackState = .init(state: .init(state: .today))
    var hasCreatedHomeView: Bool = false
    @Published var backgroundImageNaem: String
    @Published var path = NavigationPath()
    @Published var progress: Float = -1.0
    private let appStateManager = KidsyStateManager()
    private var screenStateObserver: Closeable?
    
    init() {
        backgroundImageNaem = "background_question_blue"
        screenStateObserver = appStateManager.screenState.watch { [weak self] state in
            switch state {
            case let homeTabbarState as HomeTabBarScreenState where self?.hasCreatedHomeView == true:
                self?.homeViewNavigationStackState = .init(state: homeTabbarState)
            default:
                self?.show(state)
            }
        }
    }
    
    deinit {
        screenStateObserver?.close()
    }
    
    func executeUserAction(userAction: UserAction) {
        appStateManager.executeAction(action: userAction)
    }
    
    func show<V>(_ state: V) where V: ScreenState {
        switch state {
        case let introState as IntroScreenState:
            let introNavigationStackState = IntroViewNavigationStackState(headlineText: introState.headline,
                                                                          submitText: introState.startForFree,
                                                                          alreadyHaveAnAccountText: introState.alreadyHaveAnAccount,
                                                                          onStartForFree: { [weak self] in self?.executeUserAction(userAction: IntroScreenState.Action.startForFree) },
                                                                          onLogin: { [weak self] in self?.executeUserAction(userAction: IntroScreenState.Action.logIn) })
            backgroundImageNaem = introNavigationStackState.backgroundImageName
            path.append(introNavigationStackState)
        case let onboardingState as OnboardingScreenState:
            let onboardingNavigationStackState = OnboardingViewNavigationStackState(onboardingScreenState: onboardingState,
                                                                                    onUserAction:  { [weak self] in self?.executeUserAction(userAction: $0) } )
            backgroundImageNaem = onboardingNavigationStackState.backgroundImageName
            path.append(onboardingNavigationStackState)
            self.progress = Float(onboardingState.index)/Float(onboardingState.size)
        case let onboardingSuccessState as OnboardingSuccessScreenState:
            let onboardingSuccessState = OnboardingSuccessViewNavigationStackState(headlineImageName: onboardingSuccessState.imageName,
                                                                                   headlineBottomText: onboardingSuccessState.headline,
                                                                                   submitText: onboardingSuccessState.createAnAccount,
                                                                                   alreadyHaveAnAccountText: onboardingSuccessState.alreadyHaveAnAccount,
                                                                                   onCreateAccount: { [weak self] in self?.executeUserAction(userAction: OnboardingSuccessScreenState.Action.createAccount) },
                                                                                   onLogin: { [weak self] in self?.executeUserAction(userAction: OnboardingSuccessScreenState.Action.logIn) })
            backgroundImageNaem = onboardingSuccessState.backgroundImageName
            path.append(onboardingSuccessState)
            self.progress = -1
        case let createAccountViewState as CreateAnAccountScreenState:
            let createAccountState = CreateAccountViewNavigationStackState(bottomText: createAccountViewState.bottomDescription) { [weak self] userIdentifier, fullName, email in
                self?.executeUserAction(userAction: CreateAnAccountScreenState.Action(type: .loggedin, socialMedia: .apple, userIdentifier: userIdentifier, fullName: fullName, email: email))
            }
            backgroundImageNaem = createAccountState.backgroundImageName
            path.append(createAccountState)
        case let letsbeginWithPlanScreenState as LetsBeginWithPlanScreenState:
            let letsBeginWithPlanViewNavigationStackState = LetsBeginWithPlanViewNavigationStackState(
                headlineText: letsbeginWithPlanScreenState.header,
                headlineBottomText: letsbeginWithPlanScreenState.subtitle,
                programCardTitle: letsbeginWithPlanScreenState.program_card_title,
                programCardSubTitle: letsbeginWithPlanScreenState.program_card_subTitle,
                programCardDecorativeGraphic: letsbeginWithPlanScreenState.program_card_decorative_graphic,
                programCardSubmit: letsbeginWithPlanScreenState.program_card_submit,
                onBegin: { [weak self] in self?.executeUserAction(userAction: LetsBeginWithPlanScreenState.Action.begin) },
                onClose: { [weak self] in self?.executeUserAction(userAction: LetsBeginWithPlanScreenState.Action.close) })
            backgroundImageNaem = letsBeginWithPlanViewNavigationStackState.backgroundImageName
            self.progress = -1
            path.append(letsBeginWithPlanViewNavigationStackState)
        case let planViewState as PlanScreenState:
            let planViewNavigationStackState = PlanViewNavigationStackState(planScreenState: planViewState,
                                                                            onUserAction: { [weak self] in self?.executeUserAction(userAction: $0) })
            backgroundImageNaem = planViewNavigationStackState.backgroundImageName
            path.append(planViewNavigationStackState)
            self.progress = Float(planViewState.index)/Float(planViewState.size)
        case let homeViewState as HomeTabBarScreenState:
            let homeViewNavigationStackState = HomeViewNavigationStackState(state: homeViewState)
            self.homeViewNavigationStackState = homeViewNavigationStackState
            self.hasCreatedHomeView = true
            self.progress = -1
            path.append(homeViewNavigationStackState)
        default:
            fatalError("Unsupported state \(state)")
            break;
        }
    }
    
    func updateTabIndex(index: Int) {
        executeUserAction(userAction: HomeTabBarScreenState.Action.init(type: .openTab, newTabBarIndex: Int32(index)))
    }
    
    func popToRoot() {
        path.removeLast(path.count)
    }
}
