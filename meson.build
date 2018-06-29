project(
  'headwaywm',
  'c',
  version: '0.0.1',
  license: 'GPL',
  meson_version: '>=0.43.0',
  default_options: [
    'c_std=c11',
    'warning_level=2',
    'werror=true',
  ],
)

headway_inc = include_directories('include')

add_project_arguments('-Wno-unused-parameter', language: 'c')

cc = meson.get_compiler('c')

if cc.get_id() == 'clang'
  add_project_arguments('-Wno-missing-field-initializers', language: 'c')
  add_project_arguments('-Wno-missing-braces', language: 'c')
endif

add_project_arguments('-DWL_HIDE_DEPRECATED', language: 'c')

pixman = dependency('pixman-1')
wlroots = dependency('wlroots')
wayland_server = dependency('wayland-server')
wayland_client = dependency('wayland-client')
wayland_protos = dependency('wayland-protocols', version: '>=1.14')

subdir('protocol')
subdir('headway')
