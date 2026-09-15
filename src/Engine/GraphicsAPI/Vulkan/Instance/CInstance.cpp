#include "CInstance.h"

CInstance::CInstance()
{

}
CInstance::~CInstance()
{

}

VkInstance CInstance::GetInstance() const
{
    return m_instance;
}

void CInstance::Initialize()
{
    VkApplicationInfo appInfo{
        .sType              = VK_STRUCTURE_TYPE_APPLICATION_INFO,
        .pNext              = nullptr,
        .pApplicationName   = "My Vulkan Application",
        .applicationVersion = VK_MAKE_VERSION(1, 0, 0),
        .pEngineName        = "My Vulkan Engine",
        .engineVersion      = VK_MAKE_VERSION(1, 0, 0),
        .apiVersion         = VK_API_VERSION_1_0
    };

    VkInstanceCreateInfo createInfo{
        .sType                   = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO,
        .pNext                   = nullptr,
        .flags                   = 0,
        .pApplicationInfo        = &appInfo,
        .enabledLayerCount       = 0,
        .ppEnabledLayerNames     = nullptr,
        .enabledExtensionCount   = 0,
        .ppEnabledExtensionNames = nullptr
    };

    VkResult result = vkCreateInstance(&createInfo, nullptr, &m_instance);
    if (result != VK_SUCCESS) {
        throw std::runtime_error("Failed to create Vulkan instance");
    }
}

void CInstance::CleanUp()
{
    if (m_instance) {
        vkDestroyInstance(m_instance, nullptr);
        m_instance = nullptr;
    }
}