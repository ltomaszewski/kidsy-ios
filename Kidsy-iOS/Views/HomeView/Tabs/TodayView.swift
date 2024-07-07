//
//  TodayView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 02/07/2024.
//

import SwiftUI

struct TodayView: View {
    @Binding var navigationStackState: HomeViewNavigationStackState
    
    var body: some View {
        Text("Today \(navigationStackState.state)")
    }
}
