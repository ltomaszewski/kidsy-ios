//
//  sleep_trackerLiveActivity.swift
//  sleep-tracker
//
//  Created by Lukasz Tomaszewski on 19/05/2024.
//

import ActivityKit
import WidgetKit
import SwiftUI

struct sleep_trackerAttributes: ActivityAttributes {
    public struct ContentState: Codable, Hashable {
        // Dynamic stateful properties about your activity go here!
        var emoji: String
    }

    // Fixed non-changing properties about your activity go here!
    var name: String
}

struct sleep_trackerLiveActivity: Widget {
    var body: some WidgetConfiguration {
        ActivityConfiguration(for: sleep_trackerAttributes.self) { context in
            // Lock screen/banner UI goes here
            VStack {
                Text("Hello \(context.state.emoji)")
            }
            .activityBackgroundTint(Color.cyan)
            .activitySystemActionForegroundColor(Color.black)

        } dynamicIsland: { context in
            DynamicIsland {
                // Expanded UI goes here.  Compose the expanded UI through
                // various regions, like leading/trailing/center/bottom
                DynamicIslandExpandedRegion(.leading) {
                    Text("Leading")
                }
                DynamicIslandExpandedRegion(.trailing) {
                    Text("Trailing")
                }
                DynamicIslandExpandedRegion(.bottom) {
                    Text("Bottom \(context.state.emoji)")
                    // more content
                }
            } compactLeading: {
                Text("L")
            } compactTrailing: {
                Text("T \(context.state.emoji)")
            } minimal: {
                Text(context.state.emoji)
            }
            .widgetURL(URL(string: "http://www.apple.com"))
            .keylineTint(Color.red)
        }
    }
}

extension sleep_trackerAttributes {
    fileprivate static var preview: sleep_trackerAttributes {
        sleep_trackerAttributes(name: "World")
    }
}

extension sleep_trackerAttributes.ContentState {
    fileprivate static var smiley: sleep_trackerAttributes.ContentState {
        sleep_trackerAttributes.ContentState(emoji: "😀")
     }
     
     fileprivate static var starEyes: sleep_trackerAttributes.ContentState {
         sleep_trackerAttributes.ContentState(emoji: "🤩")
     }
}

#Preview("Notification", as: .content, using: sleep_trackerAttributes.preview) {
   sleep_trackerLiveActivity()
} contentStates: {
    sleep_trackerAttributes.ContentState.smiley
    sleep_trackerAttributes.ContentState.starEyes
}
