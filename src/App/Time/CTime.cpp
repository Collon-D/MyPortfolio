#include "CTime.h"

#include <thread>

CTime::Clock::time_point CTime::CurrentTime { };
CTime::Clock::time_point CTime::PreviousTime { };

float CTime::DeltaTime { 0.0f };

void CTime::Initialize()
{
    PreviousTime = Clock::now();
}

void CTime::Update()
{
    Clock::time_point CurrentTime = Clock::now();

    DeltaTime = std::chrono::duration<float>(CurrentTime - PreviousTime).count();

    PreviousTime = CurrentTime;

    std::this_thread::sleep_for(std::chrono::milliseconds(16));
}

float CTime::GetDeltaTime() { return DeltaTime; }