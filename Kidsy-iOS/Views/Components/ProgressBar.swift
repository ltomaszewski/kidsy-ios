//
//  ProgressView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 06/05/2024.
//

import SwiftUI

struct ProgressBar: View {
    var value: Float

    var body: some View {
        GeometryReader { geometry in
            ZStack(alignment: .leading) {
                Rectangle().frame(width: geometry.size.width, height: geometry.size.height)
                    .opacity(0.3)
                    .foregroundColor(KidsyColors.paleGray)

                Rectangle().frame(width: min(CGFloat(self.value) * geometry.size.width, geometry.size.width), height: geometry.size.height)
                    .foregroundColor(KidsyColors.mintGreen)
                    .animation(.linear, value: value)
            }
            .cornerRadius(45.0)
        }
    }
}
