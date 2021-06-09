// swift-tools-version:5.3

import PackageDescription

let package = Package(
	name: "MyTrackerSDK",
	platforms:
	[
		.iOS(.v9)
	],
	products:
	[
		.library(
			name: "MyTrackerSDK",
			targets: ["MyTrackerSDK"]),
	],
	targets:
	[
		.binaryTarget(name: "MyTrackerSDK",
					  path: "Binary/MyTrackerSDK.xcframework"),
	]
)
