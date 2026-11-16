add_executable(webtrace
    main.cpp device.hpp device.cpp
)

target_include_directories(webtrace PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(webtrace PRIVATE Vulkan::Vulkan glfw)
