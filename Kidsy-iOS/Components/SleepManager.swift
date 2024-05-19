//
//  SleepManager.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 19/05/2024.
//

import Foundation
import WidgetKit

class SleepManager {
    
    // Singleton instance
    static let shared = SleepManager()
    
    // Private initializer to prevent instantiation from outside
    private init() {}
    
    // Keys for UserDefaults
    private let startKey = "startSleepDate"
    private let sleepSessionsKey = "sleepSessions"
    
    // Property to indicate if a sleep session is in progress
    var isSleepInProgress: Bool {
        return UserDefaults.standard.object(forKey: startKey) != nil
    }
    
    // Property to return list of all sleep sessions
    var sleepSessions: [[String: Date]] {
        return UserDefaults.standard.array(forKey: sleepSessionsKey) as? [[String: Date]] ?? []
    }
    
    // Property to get the start date of the current sleep session
    var currentSleepStartDate: Date? {
        return UserDefaults.standard.object(forKey: startKey) as? Date
    }
    
    // Method to start a sleep session
    func start() throws {
        guard !isSleepInProgress else {
            throw SleepManagerError.sleepInProgress
        }
        let now = Date()
        UserDefaults.standard.set(now, forKey: startKey)
        UserDefaults.standard.synchronize()
        print("Start sleep \(now) isSleepInProgress \(isSleepInProgress)")
        WidgetCenter.shared.reloadAllTimelines()
    }
    
    // Method to stop a sleep session
    func stop() throws {
        guard let startDate = UserDefaults.standard.object(forKey: startKey) as? Date else {
            throw SleepManagerError.noSleepInProgress
        }
        let endDate = Date()
        
        // Save sleep session to storage
        var sessions = sleepSessions
        let session = ["start": startDate, "end": endDate]
        sessions.append(session)
        UserDefaults.standard.set(sessions, forKey: sleepSessionsKey)
        
        // Clear the start date to allow new session
        UserDefaults.standard.removeObject(forKey: startKey)
        UserDefaults.standard.synchronize()
        print("Stop sleep \(startDate) \(endDate)")
        WidgetCenter.shared.reloadAllTimelines()
    }
    
    // Custom error types
    enum SleepManagerError: Error {
        case sleepInProgress
        case noSleepInProgress
    }
}
