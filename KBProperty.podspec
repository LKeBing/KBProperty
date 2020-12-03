Pod::Spec.new do |s|
  s.name         = "KBProperty"
  s.version      = "0.0.1"
  s.ios.deployment_target = '9.0'
  s.summary      = "objective-c 部分属性的宏定义简写，方便快速声明属性"
  s.homepage     = "https://github.com/LKeBing/KBProperty"
  s.license      = "MIT"
  s.author       = { "LKeBing" => "13568922114@163.com" }
  s.source       = { :git => 'https://github.com/LKeBing/KBProperty.git', :tag => s.version}
  s.requires_arc = true
  s.source_files = 'KBProperty/*'
end
