#
# Be sure to run `pod lib lint SFLiveLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SFLiveLib'
  s.version          = '1.0.1'
  s.summary          = 'Joygo Live System Client Lib'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/nemoleo'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lee' => 'nemoleo@yeah.met' }
  s.source           = { :git => 'https://github.com/nemoleo/SFLiveLib.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'SFLiveLib/SFLibManager.h'
  s.vendored_libraries = 'Library/SFLiveLib/*.a'
  s.public_header_files = 'SFLiveLib/SFLibManager.h'
  #s.preserve_paths = 'Library/**/*.a'
  
  # s.resource_bundles = {
  #   'SFLiveLib' => ['SFLiveLib/Assets/*.png']
  # }

  s.subspec 'ServerQuerys' do |ss|
    ss.ios.deployment_target = '8.0'

    ss.source_files = 'SFLiveLib/ServerApi/Querys/*.h'
    ss.public_header_files = 'SFLiveLib/ServerApi/Querys/*.h'

    ss.frameworks = 'Foundation'

    ss.dependency 'Mantle'
    ss.dependency 'Overcoat'
  end

  s.subspec 'ServerModels' do |ss|
    ss.ios.deployment_target = '8.0'

    ss.source_files = 'SFLiveLib/ServerApi/Models/*.h'
    ss.public_header_files = 'SFLiveLib/ServerApi/Models/*.h'

    ss.frameworks = 'Foundation','UIKit','CoreGraphics'

    ss.dependency 'Mantle'
  end

  s.subspec 'IMManager' do |ss|
    ss.ios.deployment_target = '8.0'

    ss.source_files = 'SFLiveLib/IMManager/*.h'
    ss.public_header_files = 'SFLiveLib/IMManager/*.h'

    ss.frameworks = 'Foundation'

    ss.dependency 'FMDB'
  end

  s.subspec 'MessageClient' do |ss|
    ss.ios.deployment_target = '8.0'

    ss.source_files = 'SFLiveLib/MessageClient/*.h'
    ss.public_header_files = 'SFLiveLib/MessageClient/*.h'

    ss.frameworks = 'Foundation'

    ss.dependency 'CocoaAsyncSocket'
  end

  s.subspec 'LiveManager' do |ss|
    ss.ios.deployment_target = '8.0'

    ss.source_files = 'SFLiveLib/LiveManager/*.h'
    ss.public_header_files = 'SFLiveLib/LiveManager/*.h'

    ss.vendored_libraries = 'Library/openssl/*.a','Library/ffmpeg/*.a'

    ss.frameworks = 'Foundation','AVFoundation','VideoToolbox','AudioToolbox','CoreTelephony','OpenAL'
    ss.libraries = 'stdc++','c++','iconv'

    ss.xcconfig = {
       'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
       'CLANG_CXX_LIBRARY' => 'libc++'
    }

  end

end
