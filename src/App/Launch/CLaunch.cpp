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
}

void CLaunch::Run()
{
    while (!m_window.ShouldClose())    
    {
        m_window.PollEvents();

        CTime::Update();

        std::cout << CTime::GetDeltaTime() << std::endl;
    }
}

void CLaunch::CleanUp()
{
    m_window.CleanUp();
}