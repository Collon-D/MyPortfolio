#pragma once

#include "VkHeader.hpp"

class CContext
{
private:
	VkInstance               m_instance{ VK_NULL_HANDLE };
	VkDebugUtilsMessengerEXT m_debugMessenger{ VK_NULL_HANDLE };

public:
	CContext();
	~CContext();

	void Initialize();
	void CleanUp();

	static VKAPI_ATTR VkBool32 VKAPI_CALL DebugCallback(
		VkDebugUtilsMessageSeverityFlagBitsEXT _messageSeverity,
		VkDebugUtilsMessageTypeFlagsEXT _messageType,
		const VkDebugUtilsMessengerCallbackDataEXT* _pCallbackData,
		void* pUserData)
	{
		if (_messageSeverity >= VK_DEBUG_UTILS_MESSAGE_SEVERITY_WARNING_BIT_EXT)
		{
			std::cerr << "Validation Layer : " << _pCallbackData->pMessage << std::endl;
		}

		return VK_FALSE;
	}

private:
	void CreateInstance();

	void SetupDebugMessenger();
	void PopulateDebugMessengerCreateInfo(VkDebugUtilsMessengerCreateInfoEXT& _createInfo);

	// About Validation Layer Supporting Method
	bool CheckValidationLayerSupport();

	std::vector<const char*> GetRequiredExtensions();
};