//
//  ToggleGrayButton.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 27/04/2024.
//

import SwiftUI

struct ToggleGrayButton: View {
    let title: String
    let action: () -> Void
    
    @State private var isSelected: Bool = false
    
    var body: some View {
        Button(action: {
            isSelected.toggle()
            action()
        }) {
            Text(title)
                 .font(.sfButton())
                 .foregroundColor(.black) // Foreground color set to gray
                 .padding()
                 .frame(maxWidth: .infinity) // Ensures the button takes the full width
                 .background(Color(red: 0.949, green: 0.949, blue: 0.949)) // Background color can be adjusted if needed
                 .overlay(
                     RoundedRectangle(cornerRadius: 10)
                         .stroke(isSelected ? Color.black : Color.clear, lineWidth: 4) // Conditional border
                 )
                 .cornerRadius(10)
                 .animation(.linear, value: isSelected) // Smooth transition for border appearance
        }
    }
}

#Preview {
    ToggleGrayButton(title: "Test", action: {})
}
