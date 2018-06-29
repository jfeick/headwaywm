headway_sources = files(
  'headway.c',
  'server.c',
  'output.c',
)

headway_deps = [
  pixman,
  wayland_server,
  wlroots,
]

executable(
  'headway',
  headway_sources,
  include_directories: [headway_inc],
  dependencies: headway_deps,
)
