add_executable(partum-artificium main.cpp partumartificium.cpp
  partumartificiumrenderer.cpp)

target_link_libraries(partum-artificium boost_program_options)
target_link_libraries(partum-artificium errors ogre_renderer)

install_targets(/usr/bin partum-artificium)
