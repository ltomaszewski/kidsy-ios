//
//  DateTimePicker.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 12/05/2024.
//

import SwiftUI

struct DateTimePicker: View {
    @Environment(\.presentationMode) var presentationMode
    @Binding var selectedDate : Date
    
    var body: some View {
        VStack {
            Spacer()
            HStack{
                Text("Time")
                    .font(.sfBottomDescription())
                Spacer()
                Button.init(action: {
                    presentationMode.wrappedValue.dismiss()
                }, label: {
                    Text("Confirm")
                        .foregroundColor(.black)
                        .font(.sfButton())
                })
            }
            .padding(.horizontal)
            
            
            DatePicker("",
                       selection: $selectedDate,
                       displayedComponents: [.hourAndMinute])
            .datePickerStyle(WheelDatePickerStyle())
            .labelsHidden()
            .frame(minWidth: 0, maxWidth: .infinity, alignment: .center)
        }
        .background(BackgroundCleanerView())
    }
}

struct BackgroundCleanerView: UIViewRepresentable {
    func makeUIView(context: Context) -> UIView {
        let view = UIView()
        DispatchQueue.main.async {
            view.superview?.superview?.backgroundColor = .clear
        }
        return view
    }
    
    func updateUIView(_ uiView: UIView, context: Context) {}
}

