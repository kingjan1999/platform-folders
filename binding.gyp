{
  'targets': [
    {
      'target_name': 'platform-folders',
      'defines': [ 'V8_DEPRECATION_WARNINGS=1' ],
      'sources': [ 'binding.cc', 'platform_folders.cpp' ],
      "cflags!" : [
        "-fno-exceptions"
      ],
      "cflags_cc!": [
        "-fno-rtti",
        "-fno-exceptions"
      ],

      "conditions": [
        [
          "OS==\"mac\"", {
            "xcode_settings": {
              "OTHER_CFLAGS": [
                "-mmacosx-version-min=10.7",
                "-std=c++11",
                "-stdlib=libc++"
              ],
              "GCC_ENABLE_CPP_RTTI": "YES",
              "GCC_ENABLE_CPP_EXCEPTIONS": "YES"
            }
          }
        ]
      ]
    }
  ]
}
