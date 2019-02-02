{
  'targets': [
    {
      'target_name': 'platformFolders',
      'sources': [ 'src/binding.cc', 'src/platform_folders.cpp' ],
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
            'LDFLAGS': [
                '-framework CoreServices'
            ],
            "xcode_settings": {
              "OTHER_CFLAGS": [
                "-mmacosx-version-min=10.7",
                "-std=c++11",
                "-stdlib=libc++",
                "-framework CoreServices"
              ],
              'OTHER_LDFLAGS': [
                  '-framework CoreServices'
              ],
              "GCC_ENABLE_CPP_RTTI": "YES",
              "GCC_ENABLE_CPP_EXCEPTIONS": "YES",
              "libraries": ["-framework CoreServices"],
            },
            "link_settings": {
                "libraries": [
                    "$(SDKROOT)/System/Library/Frameworks/CoreServices.framework"
                ],
            },
          }
        ]
      ]
    }
  ]
}
