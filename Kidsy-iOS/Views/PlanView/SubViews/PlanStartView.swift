//
//  PlanStartView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 26/05/2024.
//

import SwiftUI

struct PlanStartView: View {
    let navigationBarText: String
    let imageName: String
    let headlineText: String
    let headlineBottomText: String
    let submitText: String
    var onSubmit: () -> Void  // Closure for handling tap action
    
    var body: some View {
        VStack {
            Spacer()
            VStack {
                Image(imageName)
                    .padding(.top)
                
                Text(headlineText)
                    .font(.sfTitleBigger())
                    .fontWeight(.bold)
                    .multilineTextAlignment(.center)
                    .padding(.top, 64)
                
                Text(headlineBottomText)
                    .font(.sfBottomDescription())
                    .foregroundColor(KidsyColors.mediumGray)
                    .padding(.top, 4)
            }
            
            Spacer()
            BlackButton(title: submitText) {
                self.onSubmit()  // Call the provided closure when the tap is detected
            }
        }
        .padding(.bottom)
        .onTapGesture {
            if submitText.isEmpty {
                self.onSubmit()  // Call the provided closure when the tap is detected
            }
        }
    }
}

#Preview {
    PlanStartView(navigationBarText: "Newborn's Sleep",
                  imageName: "moon_purpule",
                  headlineText: "Day 1",
                  headlineBottomText: "Understanding Newborn Sleep",
                  submitText: "Begin",
                  onSubmit: {})
}
