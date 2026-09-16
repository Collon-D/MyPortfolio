#include <iostream>

#include "CLaunch.h"

#include "CTime.h"

CLaunch::CLaunch()
{

}

CLaunch::~CLaunch()
{

}

void CLaunch::Initialize()
{
    m_window.Initialize(800, 600, "Hello, World!");

    CTime::Initialize();

    m_renderer.Initialize();
}

void CLaunch::Run()
{
    while (!m_window.ShouldClose())    
    {
        m_window.PollEvents();

        CTime::Update();
    }
}

void CLaunch::CleanUp()
{
    m_renderer.CleanUp();

    m_window.CleanUp();
}