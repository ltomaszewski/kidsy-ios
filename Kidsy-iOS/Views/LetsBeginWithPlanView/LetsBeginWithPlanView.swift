//
//  LetsBeginWithPlanView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import SwiftUI

struct LetsBeginWithPlanView: View {
    let state: LetsBeginWithPlanViewNavigationStackState
    
    var body: some View {
        ZStack {
            Image(state.backgroundImageName)
                .resizable()
                .ignoresSafeArea(.all, edges: .top)
            VStack {
                HStack {
                    Button(action: state.onClose, label: {
                        Image("close")
                    })
                    Spacer()
                }
                
                Spacer(minLength: 16)
                
                VStack {
                    Text(state.headlineText)
                        .font(.sfTitle())
                        .lineSpacing(5)
                        .foregroundColor(.black)
                        .multilineTextAlignment(.center)
                    Text(state.headlineBottomText)
                        .font(.sfBottomDescription())
                        .foregroundColor(KidsyColors.mediumGray)
                        .multilineTextAlignment(.center)
                        .lineSpacing(4)
                        .padding(.top, 8)
                }
                .padding(.horizontal, 32)
                Spacer(minLength: 24)
                
                ZStack {
                    // Background color
                    KidsyColors.softSkyBlue
                        .edgesIgnoringSafeArea(.all)
                        .clipShape(RoundedRectangle(cornerRadius: 24))
                    
                    VStack {
                        // Title and Subtitle
                        Text(state.programCardTitle)
                            .font(.sfTitle())
                            .fontWeight(.bold)
                            .foregroundColor(.white)
                            .padding(.bottom,8)
                        Text(state.programCardSubTitle)
                            .font(.sfBottomDescription())
                            .foregroundColor(.white.opacity(0.7))
                        
                        Spacer()
                        
                        // Decorative Graphics
                        Image(state.programCardDecorativeGraphic) // Ensure you have an asset named 'Number3' in your Assets.xcassets
                            .resizable()
                            .aspectRatio(contentMode: .fit)
                            .frame(width: 250, height: 250)
                        
                        Spacer()
                        
                        // Button
                        // Start for free button
                        BlackButton(title: state.programCardSubmit,
                                    action: state.onBegin,
                                    isInverted: true)
                        .padding(.bottom)
                    }
                    .padding()
                }
                
                Spacer(minLength: 64)
                
            }
            .padding(.horizontal, 24)
        }
        .navigationBarBackButtonHidden(true)
    }
}

#Preview {
    LetsBeginWithPlanView(state:
            .init(
                headlineText: "Let’s begin your personalized program",
                headlineBottomText: "It’s an interactive series scientifically proven to improve your child sleep.",
                programCardTitle: "Nina’s Sleep",
                programCardSubTitle: "Newborn’s Sleep",
                programCardDecorativeGraphic: "moon_purpule",
                programCardSubmit: "Begin",
                onBegin: {},
                onClose: {}
            )
    )
}
