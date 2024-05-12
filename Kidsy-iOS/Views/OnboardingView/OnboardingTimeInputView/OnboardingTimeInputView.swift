//
//  OnboardingTimeInputView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 12/05/2024.
//

import SwiftUI

struct OnboardingTimeInputView: View {
    let headlineText: String
    let datePickerCaptionText: String
    let submitText: String
    let onSubmit: (Date) -> ()
    @State private var isPresented = false
    @State private var selectedDate = Date()
    
    var body: some View {
        ZStack {
            VStack {
                Spacer()
                VStack {
                    Text(headlineText)
                        .font(.sfTitle())
                        .multilineTextAlignment(.center)
                    
                    HStack {
                        Text(datePickerCaptionText)
                            .font(.sfBottomDescription())
                        Spacer()
                        Text("\(selectedDate.formattedTime())")
                            .font(.sfBottomDescription())
                        Image("arrow_bottom")
                    }
                    .padding(.top)
                    .onTapGesture {
                        isPresented.toggle()
                    }
                }
                .padding(16)
                Spacer()
                BlackButton(title: submitText) {
                    onSubmit(selectedDate)
                }
                .opacity(isPresented ? 0.0 : 1.0)
                .animation(.easeInOut(duration: 0.3), value: isPresented) // Animate opacity change
                .padding(.bottom)
            }
        }
        .fullScreenCover(isPresented: $isPresented){
            DateTimePicker(selectedDate: $selectedDate)
        }
    }
}


#Preview {
    OnboardingTimeInputView(headlineText: "When would you like to be reminded?",
                            datePickerCaptionText: "Select Time",
                            submitText: "Set reminder") { _ in }
}

extension Date {
    func formattedTime() -> String {
        let formatter = DateFormatter()
        formatter.dateFormat = "h:mm a" // "a" for AM/PM style
        return formatter.string(from: self)
    }
}
