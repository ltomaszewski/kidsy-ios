//
//  EndlessCalendarView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 13/07/2024.
//

import SwiftUI

struct EndlessCalendarView: View {
    let nPanels = 48
    let panelSize: CGFloat = 60
    let gapSize: CGFloat = 0
    let baseDate = Date()
    
    @State private var snappedHourOffset = 0
    @State private var draggedHourOffset = Double.zero
    
    private var positionHeight: CGFloat {
        CGFloat(panelSize + gapSize)
    }
    
    private func yOffsetForIndex(index: Int) -> Double {
        let midIndex = Double(nPanels / 2)
        var dIndex = (Double(index) - draggedHourOffset - midIndex).truncatingRemainder(dividingBy: Double(nPanels))
        if dIndex < -midIndex {
            dIndex += Double(nPanels)
        } else if dIndex > midIndex {
            dIndex -= Double(nPanels)
        }
        return dIndex * positionHeight
    }
    
    private func hourAdjustmentForIndex(index: Int) -> Int {
        let midIndex = nPanels / 2
        var dIndex = (index - snappedHourOffset - midIndex) % nPanels
        if dIndex < -midIndex {
            dIndex += nPanels
        } else if dIndex > midIndex {
            dIndex -= nPanels
        }
        return dIndex + snappedHourOffset
    }
    
    private func hourView(index: Int, halfFullHeight: CGFloat) -> some View {
        let yOffset = yOffsetForIndex(index: index)
        let hourAdjustment = hourAdjustmentForIndex(index: index)
        let dateToDisplay = Calendar.current.date(byAdding: .hour, value: hourAdjustment, to: baseDate) ?? baseDate
        let isCurrentHour = Calendar.current.isDate(dateToDisplay, equalTo: baseDate, toGranularity: .hour)

        return ZStack {
            Color.black
            VStack {
                HStack {
                    VStack {
                        HourTimeView(date: dateToDisplay)
                        Spacer()
                    }.frame(width: 56)
                    Spacer(minLength: 16)
                    VStack {
                        CalendarSeparator()
                        Spacer()
                    }
                }
            }
            .foregroundColor(.white)
            if isCurrentHour {
                currentTimeSeparator
            }
        }
        .frame(height: panelSize)
        .offset(y: yOffset)
        .opacity(yOffset + positionHeight < -halfFullHeight || yOffset - positionHeight > halfFullHeight ? 0 : 1)
    }
    
    private var currentTimeSeparator: some View {
        GeometryReader { geometry in
            let currentMinute = Calendar.current.component(.minute, from: Date())
            let position = CGFloat(currentMinute) / 60.0 * geometry.size.height
            let hourTimeWidth = 64.0
            let separatorWidth: CGFloat = geometry.size.width - hourTimeWidth
            let circleDiameter: CGFloat = 8 // Adjust the diameter of the circle as needed
            
            ZStack {
                Rectangle()
                    .fill(Color("state_error"))
                    .frame(width: separatorWidth, height: 2)
                    .position(x: (separatorWidth / 2) + hourTimeWidth, y: position)

                Circle()
                    .fill(Color("state_error"))
                    .frame(width: circleDiameter, height: circleDiameter)
                    .position(x: (separatorWidth / 2) + hourTimeWidth - (separatorWidth / 2) + (circleDiameter / 2), y: position)
            }
        }
    }
    
    private var dragged: some Gesture {
        DragGesture()
            .onChanged() { val in
                draggedHourOffset = Double(snappedHourOffset) - (val.translation.height / positionHeight)
            }
            .onEnded { val in
                withAnimation(.easeOut) {
                    snappedHourOffset = Int(Double(snappedHourOffset) - (val.predictedEndTranslation.height / positionHeight).rounded())
                    draggedHourOffset = Double(snappedHourOffset)
                }
            }
    }
    
    var body: some View {
        GeometryReader { proxy in
            let halfFullHeight = proxy.size.height / 2
            ZStack {
                ForEach(0..<nPanels, id: \.self) { index in
                    hourView(index: index, halfFullHeight: halfFullHeight)
                }
            }
            .gesture(dragged)
            .frame(maxWidth: .infinity, maxHeight: .infinity)
        }
    }
}

extension EndlessCalendarView {
    struct CalendarSeparator: View {
        var body: some View {
            Rectangle()
                .fill(Color("slate100"))
                .frame(height: 1)
                .opacity(0.4)
        }
    }
}

#Preview {
    EndlessCalendarView()
}
