//
//  sleep_trackerBundle.swift
//  sleep-tracker
//
//  Created by Lukasz Tomaszewski on 19/05/2024.
//

import WidgetKit
import SwiftUI

@main
struct sleep_trackerBundle: WidgetBundle {
    var body: some Widget {
        sleep_tracker()
        sleep_trackerLiveActivity()
    }
}
