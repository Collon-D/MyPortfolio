#pragma once

#include "CWindow.h"

class CLaunch
{
private:
    CWindow m_window;

public:
    CLaunch();
    ~CLaunch();

    CLaunch(const CLaunch&) = delete;
    CLaunch(const CLaunch&&) = delete;
    CLaunch& operator=(const CLaunch&) = delete;
    CLaunch& operator=(const CLaunch&&) = delete;

    void Initialize();
    void Run();
    void CleanUp();
};