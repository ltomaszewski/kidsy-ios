//
//  OnboardingPromptWithPointsView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 06/05/2024.
//

import SwiftUI

struct OnboardingPromptWithPointsView: View {
    let headlineText: String
    let points: [String: UIImage]
    let submitTopText: String
    let submitText: String
    var onSubmit: () -> Void
    
    var body: some View {
        VStack {
            Spacer()
            Text(headlineText)
                .font(.sfTitle())
                .multilineTextAlignment(.center)
            ForEach(points.keys.sorted(), id: \.self) { key in
                HStack {
                    Image(uiImage: points[key] ?? UIImage())
                        .resizable()
                        .scaledToFit()
                        .frame(width: 50, height: 50)

                    Text(key)
                        .font(.sfPoint())
                        .padding(.leading, 10)
                }
                .frame(maxWidth: .infinity, minHeight: 50, alignment: .leading)
                .background(Color.clear)
            }
            Spacer()

            Text(submitTopText)
                .font(.sfBottomDescription())
                .foregroundColor(KidsyColors.mediumGray)
                .multilineTextAlignment(.center)
                .padding(.bottom)
            BlackButton(title: submitText) {
                onSubmit() // Pass the selected options when tapped
            }
            .padding(.bottom)
        }
    }
}


#Preview {
    OnboardingPromptWithPointsView(headlineText: "Here’s what our members are saying:",
                                   points: [
                                    "87% Improved toddler sleep": UIImage(named: "moon_blue")!,
                                    "82% Reduced newborn sick time": UIImage(named: "apple_purpule")!
                                   ],
                                   submitTopText: "Top text continue",
                                   submitText: "Continue") { }
}
