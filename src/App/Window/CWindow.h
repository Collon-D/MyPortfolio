#pragma once

#include <GLFW/glfw3.h>

class CWindow
{
private:
    GLFWwindow* m_window{nullptr};
    int         m_width{0};
    int         m_height{0};
    const char* m_title{nullptr};

public:
    CWindow();
    ~CWindow();

    CWindow(const CWindow&) = delete;
    CWindow(const CWindow&&) = delete;
    CWindow& operator=(const CWindow&) = delete;
    CWindow& operator=(const CWindow&&) = delete;

    void Initialize(int _width, int _height, const char* _title);

    bool ShouldClose();

    void PollEvents();

    void CleanUp();
};