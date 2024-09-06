// swift-tools-version:5.3

import PackageDescription

let package = Package(
	name: "MyTrackerSDK",
	platforms:
	[
		.iOS("12.4")
	],
	products:
	[
		.library(
			name: "MyTrackerSDK",
			targets: ["MyTrackerSDKLib"]),
	],
	targets:
	[
		.target(name: "MyTrackerSDKLib",
				dependencies: ["MyTrackerSDK"],
				path: "MyTrackerPackageWrapper",
				linkerSettings: [
					.linkedLibrary("z"),
					.linkedFramework("UIKit"),
					.linkedFramework("SystemConfiguration"),
					.linkedFramework("CoreData"),
					.linkedFramework("CoreTelephony"),
					.linkedFramework("StoreKit"),
					.linkedFramework("CoreMotion")
				]
		),
		.binaryTarget(name: "MyTrackerSDK",
					  path: "Binary/MyTrackerSDK.xcframework"),
	]
)
