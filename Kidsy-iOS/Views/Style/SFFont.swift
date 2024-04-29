//
//  SFFont.swift
//  Kidsy-iOS
//
//  Created by Lukasz Tomaszewski on 29/04/2024.
//

import SwiftUI

extension Font {
    public static func sfButton() -> Font {
        .custom("SF Pro Display", fixedSize: 18)
    }
    public static func sfTitle() -> Font {
        .custom("SF Pro Display", fixedSize: 24)
    }
}
