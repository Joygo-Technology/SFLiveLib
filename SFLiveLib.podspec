#
# Be sure to run `pod lib lint SFServiceLib.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see http://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'SFLiveLib'
  s.version          = '1.0.6'
  s.summary          = 'A short description of SFLiveLib.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/joygo-tech'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'lee' => 'nemoleo@yeah.net' }
  s.source           = { :git => 'https://github.com/joygo-tech/SFLiveLib.git', :tag => s.version.to_s, :submodules => true }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '8.0'

  s.source_files = 'SFLiveLib/include/*.h'
    
  # s.resource_bundles = {
  #   'SFServiceLib' => ['SFServiceLib/Assets/*.png']
  # }

  s.vendored_libraries = 'SFLiveLib/Library/*.a'
  s.public_header_files = 'SFLiveLib/include/*.h'

  s.frameworks = 'Foundation'
  s.libraries = 'stdc++'

  s.dependency 'YYModel', '~> 1.0.4'
  s.dependency 'FMDB', '~> 2.6.2'
  s.dependency 'AFNetworking', '~> 3.1.0'
  s.dependency 'RHSocketKit', '~> 2.2.1'
  s.dependency 'RHSocketKit/Core', '~> 2.2.1'
  s.dependency 'RHSocketKit/Extend', '~> 2.2.1'
  s.dependency 'wcs-ios-sdk', '~> 0.1.0'

  # s.subspec 'SUSClient' do |ss|
  #   ss.ios.deployment_target = '8.0'

  #   ss.source_files = 'SFLiveLib/SUSClient/*'
  #   ss.public_header_files = 'SFLiveLib/SUSClient/*.h'

  #   ss.frameworks = 'Foundation'

  #  ss.dependency 'YYModel'
  #  ss.dependency 'AFNetworking'
  # end

  # s.subspec 'IMManager' do |ss|
  #   ss.ios.deployment_target = '8.0'

  #   ss.source_files = 'SFLiveLib/IMManager/*'
  #   ss.public_header_files = 'SFLiveLib/IMManager/*.h'

  #   ss.frameworks = 'Foundation'

  #   ss.dependency 'FMDB'
  # end

  # s.subspec 'SUMessage' do |ss|
  #   ss.ios.deployment_target = '8.0'

  #   ss.source_files = 'SFLiveLib/SUMessage/*'
  #   ss.public_header_files = 'SFLiveLib/SUMessage/*.h'

  #   ss.frameworks = 'Foundation'

  #  ss.dependency 'RHSocketKit',:subspecs => ['Core', 'Extend']
  # end

  # s.subspec 'LiveManager' do |ss|
  #   ss.ios.deployment_target = '8.0'

  #   ss.source_files = 'LiveManager/*.h'
  #   ss.public_header_files = 'LiveManager/*.h'

  #   ss.preserve_paths = 'ffmpeg/include/*.h','openssl/include/*.h','osl/include/*.h'
  #   ss.vendored_libraries = 'LiveManager/*.a','osl/*.a','openssl/libs/*.a','ffmpeg/lib/*.a'

  #   ss.frameworks = 'Foundation','AVFoundation','VideoToolbox','AudioToolbox','CoreTelephony','OpenAL','UIKit','CoreMotion'
  #   ss.libraries = 'stdc++','c++','iconv','resolv'

  #   ss.pod_target_xcconfig = { 'ENABLE_BITCODE' => 'NO' }
  #   ss.user_target_xcconfig = {
  #      'CLANG_CXX_LANGUAGE_STANDARD' => 'c++11',
  #      'CLANG_CXX_LIBRARY' => 'libc++',
  #      'HEADER_SEARCH_PATHS' => "${PODS_ROOT}/#{s.name}/ffmpeg/include ${PODS_ROOT}/#{s.name}/osl/include ${PODS_ROOT}/#{s.name}/openssl/include"
  #   }

  # end
  
end
