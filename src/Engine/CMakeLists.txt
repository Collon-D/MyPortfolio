
find_package(Vulkan REQUIRED)

add_library(Engine STATIC)

target_sources(Engine
    PRIVATE
        Renderer/CRenderer.cpp

        GraphicsAPI/Vulkan/Context/CContext.cpp
)

target_include_directories(Engine
    PUBLIC
        Renderer/

        GraphicsAPI/Vulkan/Context
        GraphicsAPI/Vulkan/Header
)

target_link_libraries(Engine
    PRIVATE
        glfw
        Vulkan::Vulkan
)