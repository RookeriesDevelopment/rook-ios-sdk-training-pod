
Pod::Spec.new do |spec|

  spec.name         = "RookMotionSDK"
  spec.version      = "1.0.7"
  spec.summary      = "RookMotion iOS Lib"

  spec.description  = "RookMotion iOS sdk allows the implementation of the RookMotion functionalities required to add training measurement, tracking, and analysis to an iOS APP"

  spec.homepage     = "https://gitlab.com/rooklinkforclients/RookMotion-SDK-Cocoa.git"



   spec.license      = "MIT"
   spec.license      = { :type => "MIT", :file => "LICENSE" }

  spec.author             = { "RookMotion" => "cesar.vargas@rookmotion.com" }


  spec.platform     = :ios
  spec.ios.deployment_target = '13.0'
  spec.swift_version = '5.0'


  spec.source       = { :git => "https://gitlab.com/rooklinkforclients/RookMotion-SDK-Cocoa.git", :tag => "1.0.7" }

  spec.frameworks  = "SystemConfiguration", "CoreBluetooth", "UIKit", "CoreData"

  spec.ios.vendored_frameworks = 'RookMotionSDK.xcframework'

  spec.dependency 'SwiftyJSON', '5.0.1'
  spec.dependency 'Alamofire', '5.6.2'
  spec.dependency 'RealmSwift', '10.5.0'

end
