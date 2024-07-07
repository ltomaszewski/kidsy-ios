//
//  ProfileView.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 02/07/2024.
//

import SwiftUI

struct ProfileView: View {
    @Binding var navigationStackState: HomeViewNavigationStackState
    
    var body: some View {
        Text("Profile \(navigationStackState.state)")
    }
}
