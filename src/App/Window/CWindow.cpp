#include "CWindow.h"

CWindow::CWindow()
{

}

CWindow::~CWindow()
{
    m_window = nullptr; 
    m_width  = 0;
    m_height = 0;
    m_title  = nullptr;
}

void CWindow::Initialize(int _width, int _height, const char* _title)
{
    m_width  = _width;
    m_height = _height;
    m_title  = _title;

    glfwInit();

    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE); 

    m_window = glfwCreateWindow(m_width, m_height, m_title, nullptr, nullptr);
}

bool CWindow::ShouldClose()
{
    return glfwWindowShouldClose(m_window);
}

void CWindow::PollEvents()
{
    glfwPollEvents();
}

void CWindow::CleanUp()
{
    glfwDestroyWindow(m_window);
    glfwTerminate();
}
