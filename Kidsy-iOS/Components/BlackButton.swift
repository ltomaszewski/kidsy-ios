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

    var body: some View {
        Button(action: action) {
            Text(title)
                .font(.sfButton())
                .foregroundColor(.white)
                .padding()
                .frame(maxWidth: .infinity) // Ensures the button takes the full width
                .background(.black) // Background color can be adjusted if needed
                .cornerRadius(10)
        }
    }
}

#Preview {
    BlackButton(title: "Test 1", action: {})
}
