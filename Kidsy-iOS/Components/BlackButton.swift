//
//  BlackButton.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct BlackButton: View {
    let title: String
    let action: () -> Void
    var isInverted: Bool = false // Default is false, so it uses the original style by default

    var body: some View {
        Button(action: action) {
            Text(title)
                .font(.sfButton())
                .foregroundColor(isInverted ? .black : .white) // Choose color based on isInverted
                .padding()
                .frame(maxWidth: .infinity) // Ensures the button takes the full width
                .background(isInverted ? .white : .black) // Background color based on isInverted
                .cornerRadius(10)
        }
    }
}

//Preview
struct BlackButton_Previews: PreviewProvider {
    static var previews: some View {
        Group {
            BlackButton(title: "Normal", action: {})
            BlackButton(title: "Inverted", action: {}, isInverted: true)
        }
    }
}
