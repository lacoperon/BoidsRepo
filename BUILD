cc_library(
  name='boids',
  srcs=['src/boids/boids.cpp'],
  hdrs=['src/boids/boids.h']
)

cc_binary(
  name='main',
  srcs=['main.cc'],
  deps=[":boids"],
)