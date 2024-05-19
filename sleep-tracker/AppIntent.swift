//
//  AppIntent.swift
//  sleep-tracker
//
//  Created by Lukasz Tomaszewski on 19/05/2024.
//

import WidgetKit
import AppIntents

struct ConfigurationAppIntent: WidgetConfigurationIntent {
    static var title: LocalizedStringResource = "Configuration"
    static var description = IntentDescription("This is an example widget.")

    // An example configurable parameter.
    @Parameter(title: "widget-text", default: "Sleep")
    var text: String
    
    @Parameter(title: "widget-text", default: false)
    var isSleepInProgress: Bool
}
