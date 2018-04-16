{
  'targets': [
    {
      'target_name': 'platform-folders',
      'defines': [ 'V8_DEPRECATION_WARNINGS=1' ],
      'sources': [ 'binding.cc', 'platform_folders.cpp' ],
      'cflags_cc': [ '-fexceptions' ]
    }
  ]
}
