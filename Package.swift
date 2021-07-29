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
			targets: ["MyTrackerSDKLib"]),
	],
	targets:
	[
		.target(name: "MyTrackerSDKLib",
				dependencies: ["MyTrackerSDK"],
				path: "MyTrackerPackageWrapper",
				linkerSettings: [
					.linkedLibrary("z"),
					.linkedFramework("AdServices"),
					.linkedFramework("UIKit"),
					.linkedFramework("SystemConfiguration"),
					.linkedFramework("CoreData"),
					.linkedFramework("iAd"),
					.linkedFramework("CoreTelephony"),
					.linkedFramework("StoreKit"),
					.linkedFramework("CoreMotion"),
					.linkedFramework("AdSupport")
				]
		),
		.binaryTarget(name: "MyTrackerSDK",
					  path: "Binary/MyTrackerSDK.xcframework"),
	]
)
