//
//  HourTimeView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 13/07/2024.
//

import SwiftUI

extension EndlessCalendarView {
    struct HourTimeView: View {
        let hourAndMinute: String
        let amPm: String
        
        init(date: Date) {
            let formatter = DateFormatter()
            formatter.dateFormat = "h:'00'"
            hourAndMinute = formatter.string(from: date).appending(" ")
            
            formatter.dateFormat = "a"
            amPm = formatter.string(from: date)
        }
        
        var body: some View {
            HStack(alignment: .lastTextBaseline, spacing: 0) {
                Spacer()
                Text(hourAndMinute)
                    .foregroundColor(Color("slate100"))
                    .font(.sfText12())
                    .opacity(0.8)
                Text(amPm)
                    .foregroundColor(Color("slate100"))
                    .font(.sfText10())
                    .opacity(0.5)
            }
        }
    }
}

#Preview {
    EndlessCalendarView.HourTimeView(date: .now)
}
