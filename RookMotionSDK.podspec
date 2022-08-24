
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
  # spec.platform     = :ios, "5.0"
  spec.ios.deployment_target = '13.0'
  spec.swift_version = '5.0'
  #spec.source_files = 'Source/**/*'

  #  When using multiple platforms
  # spec.ios.deployment_target = "5.0"
  # spec.osx.deployment_target = "10.5"
  # spec.watchos.deployment_target = "2.0"
  # spec.tvos.deployment_target = "9.0"

  spec.source       = { :git => "https://gitlab.com/rooklinkforclients/RookMotion-SDK-Cocoa.git", :tag => "v1.0.6-adv"  }

  #spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  #spec.exclude_files = "Classes/Exclude"
  #spec.source_files = 'RookMotionSDK/**/*'

  #spec.source_files = 'Dummy/**/*'
  # spec.resource  = "icon.png"
  # spec.resources = "Resources/*.png"

  # spec.preserve_paths = "FilesToSave", "MoreFilesToSave"

  spec.frameworks  = "SystemConfiguration", "CoreBluetooth", "UIKit", "CoreData"
  # spec.frameworks = "SomeFramework", "AnotherFramework"

  # spec.requires_arc = true

  spec.ios.vendored_frameworks = 'RookMotionSDK.xcframework'

  # spec.xcconfig = { "HEADER_SEARCH_PATHS" => "$(SDKROOT)/usr/include/libxml2" }
  spec.dependency 'SwiftyJSON', '5.0.1'
  spec.dependency 'Alamofire', '5.6.2'
  spec.dependency 'RealmSwift', '10.5.0'

end
