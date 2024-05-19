//
//  StartSleepSessionIntent.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 19/05/2024.
//

import AppIntents

struct StartSleepSessionIntent: AppIntent {
    static var title: LocalizedStringResource = "Start sleep session"
    
    init(){}
    
    func perform() async throws -> some IntentResult {
        try SleepManager.shared.start()
        return .result()
    }
}

struct StopSleepSessionIntent: AppIntent {
    static var title: LocalizedStringResource = "Stop sleep session"
    
    init(){}
    
    func perform() async throws -> some IntentResult {
        try SleepManager.shared.stop()
        return .result()
    }
}
