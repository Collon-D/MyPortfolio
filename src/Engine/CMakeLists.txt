
find_package(Vulkan REQUIRED)

add_library(Engine STATIC)

target_sources(Engine
    PRIVATE
        Renderer/CRenderer.cpp

        GraphicsAPI/Vulkan/Instance/CInstance.cpp
)

target_include_directories(Engine
    PUBLIC
        GraphicsAPI/Vulkan/Header
        GraphicsAPI/Vulkan/Instance
)

target_link_libraries(Engine
    PRIVATE
        glfw
        Vulkan::Vulkan
)