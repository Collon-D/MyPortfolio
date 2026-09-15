#pragma once

#include <chrono>

class CTime
{
using Clock = std::chrono::steady_clock;

private:
    static Clock::time_point CurrentTime;
    static Clock::time_point PreviousTime;

    static float DeltaTime;

public:
    static void Initialize();
    static void Update();

    static float GetDeltaTime();
};