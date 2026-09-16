#pragma once

#include "CWindow.h"

#include "CRenderer.h"

class CLaunch
{
private:
    CWindow m_window;

    CRenderer m_renderer;

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