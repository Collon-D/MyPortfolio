#pragma once

#include "VkHeader.hpp"

class CInstance
{
private:
    VkInstance m_instance{VK_NULL_HANDLE};

public:
    CInstance();
    ~CInstance();

    VkInstance GetInstance() const;

    void Initialize();
    void CleanUp();
};