#include "CLaunch.h"

#include <stdexcept>

int main(int argc, char** argv)
{
    CLaunch launch;
    launch.Initialize();

    try
    {
        launch.Run();
    }
    catch (const std::exception& e)
    {
        throw std::runtime_error(e.what());
    }

    launch.CleanUp();

    return 0;
}