
Pod::Spec.new do |spec|

  spec.name         = "RookMotionSDK"
  spec.version      = "1.1.0"
  spec.summary      = "RookMotion iOS Lib"

  spec.description  = "RookMotion iOS sdk allows the implementation of the RookMotion functionalities required to add training measurement, tracking, and analysis to an iOS APP"

  spec.homepage     = "https://github.com/RookeriesDevelopment/rook-ios-sdk-training-pod.git"



   spec.license      = "MIT"
   spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author             = { "RookMotion" => "cesar.vargas@rookmotion.com" }


  spec.platform     = :ios
  spec.ios.deployment_target = '13.0'
  spec.swift_version = '5.0'


  spec.source       = { :git => "https://github.com/RookeriesDevelopment/rook-ios-sdk-training-pod.git", :tag => "1.1.0" }

  spec.frameworks  = "SystemConfiguration", "CoreBluetooth", "UIKit", "CoreData"

  spec.ios.vendored_frameworks = 'RookMotionSDK.xcframework'

end
