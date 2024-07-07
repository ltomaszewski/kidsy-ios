//
//  SinglesView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 02/07/2024.
//

import SwiftUI

struct SingleView: View {
    @Binding var navigationStackState: HomeViewNavigationStackState
    
    var body: some View {
        Text("Single \(navigationStackState.state)")
    }
}
