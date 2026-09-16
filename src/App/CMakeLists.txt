
find_package(Vulkan REQUIRED)

add_executable(App)

target_sources(App
    PRIVATE

        #Launch
        Launch/CLaunch.cpp
        Launch/main.cpp

        #Time
        Time/CTime.cpp

        # Window 
        Window/CWindow.cpp
)

target_include_directories(App
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/Input
        ${CMAKE_CURRENT_SOURCE_DIR}/Launch
        ${CMAKE_CURRENT_SOURCE_DIR}/Path
        ${CMAKE_CURRENT_SOURCE_DIR}/Time
        ${CMAKE_CURRENT_SOURCE_DIR}/Window
)

target_link_libraries(App
    PRIVATE
        glfw
        Vulkan::Vulkan
        Engine
)

set_target_properties(App PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
)