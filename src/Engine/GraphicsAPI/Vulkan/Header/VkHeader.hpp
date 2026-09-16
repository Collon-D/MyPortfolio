#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>

#include <stdexcept>
#include <vector>
#include <iostream>

const std::vector<const char*> VALIDATION_LAYERS = {
	"VK_LAYER_KHRONOS_validation"
};

#ifdef NDEBUG
	const bool ENABLE_VALIDATION_LAYERS = false;
#else
	const bool ENABLE_VALIDATION_LAYERS = true;
#endif

// For Debug Messenger

static VkResult CreateDebugUtilsMessengerEXT(VkInstance _instance, 
	const VkDebugUtilsMessengerCreateInfoEXT* _pCreateInfo, 
	const VkAllocationCallbacks* _pAllocator, 
	VkDebugUtilsMessengerEXT* _pDebugMessenger) 
{
	auto func = (PFN_vkCreateDebugUtilsMessengerEXT)vkGetInstanceProcAddr(_instance, "vkCreateDebugUtilsMessengerEXT");
	if (func != nullptr) 
	{
		return func(_instance, _pCreateInfo, _pAllocator, _pDebugMessenger);
	}
	else 
	{
		return VK_ERROR_EXTENSION_NOT_PRESENT;
	}
}

static void DestroyDebugUtilsMessengerEXT(VkInstance _instance, 
	VkDebugUtilsMessengerEXT _debugMessenger, 
	const VkAllocationCallbacks* _pAllocator) 
{
	auto func = (PFN_vkDestroyDebugUtilsMessengerEXT)vkGetInstanceProcAddr(_instance, "vkDestroyDebugUtilsMessengerEXT");
	if (func != nullptr) 
	{
		func(_instance, _debugMessenger, _pAllocator);
	}
}