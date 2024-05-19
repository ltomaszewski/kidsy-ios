//
//  sleep_tracker.swift
//  sleep-tracker
//
//  Created by Lukasz Tomaszewski on 19/05/2024.
//

import WidgetKit
import SwiftUI

struct Provider: AppIntentTimelineProvider {
    func placeholder(in context: Context) -> SimpleEntry {
        
        SimpleEntry(date: Date(), sleepStarted: nil, configuration: ConfigurationAppIntent())
    }

    func snapshot(for configuration: ConfigurationAppIntent, in context: Context) async -> SimpleEntry {
        if SleepManager.shared.isSleepInProgress {
            configuration.isSleepInProgress = true
            return SimpleEntry(date: Date(), sleepStarted: SleepManager.shared.currentSleepStartDate, configuration: configuration)
        } else {
            configuration.isSleepInProgress = false
            return SimpleEntry(date: Date(), sleepStarted: nil, configuration: configuration)
        }
    }
    
    func timeline(for configuration: ConfigurationAppIntent, in context: Context) async -> Timeline<SimpleEntry> {
        var entries: [SimpleEntry] = []

        // Generate a timeline consisting of five entries an hour apart, starting from the current date.
        if SleepManager.shared.isSleepInProgress {
            configuration.isSleepInProgress = true
            let entry = SimpleEntry(date: Date(), sleepStarted: SleepManager.shared.currentSleepStartDate, configuration: configuration)
            entries.append(entry)
        } else {
            configuration.isSleepInProgress = false
            let entry = SimpleEntry(date: Date(), sleepStarted: nil, configuration: configuration)
            entries.append(entry)
        }

        return Timeline(entries: entries, policy: .atEnd)
    }
}

struct SimpleEntry: TimelineEntry {
    var date: Date
    let sleepStarted: Date?
    let configuration: ConfigurationAppIntent
}

struct sleep_trackerEntryView : View {
    var entry: Provider.Entry

    var body: some View {
        VStack {
            if entry.configuration.isSleepInProgress {
                Text("Sleeping:")
                Text(entry.configuration.text)
                Button(intent: StopSleepSessionIntent()) {
                    Label("Stop sleep", systemImage: "stop")
                        .font(.caption)
                }
                .tint(Color.black)
                .foregroundColor(.white)
            } else {
                Text("Sleep tracker state:")
                Text(entry.configuration.text)
                Button(intent: StartSleepSessionIntent()) {
                    Label("Start sleep", systemImage: "play")
                        .font(.caption)
                }
                .tint(Color.black)
                .foregroundColor(.white)
            }
        }
    }
}

struct sleep_tracker: Widget {
    let kind: String = "sleep_tracker"

    var body: some WidgetConfiguration {
        AppIntentConfiguration(kind: kind, 
                               intent: ConfigurationAppIntent.self,
                               provider: Provider()) { entry in
            sleep_trackerEntryView(entry: entry)
                .containerBackground(.fill.tertiary, for: .widget)
        }
    }
}

extension ConfigurationAppIntent {
    fileprivate static var readyToSleep: ConfigurationAppIntent {
        let intent = ConfigurationAppIntent()
        intent.text = "Tap to start sleep session"
        return intent
    }
    
    fileprivate static var endSleep: ConfigurationAppIntent {
        let intent = ConfigurationAppIntent()
        intent.text = "End has been reached, session saved"
        return intent
    }
}

#Preview(as: .systemLarge) {
    sleep_tracker()
} timeline: {
    SimpleEntry(date: .now, sleepStarted: nil, configuration: .readyToSleep)
    SimpleEntry(date: .now, sleepStarted: nil, configuration: .endSleep)
}
