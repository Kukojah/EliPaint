#include "Application.hpp"

Application::Application() {};

Application::~Application() {};

int Application::Run()
{

    while (eliPaintUI.IsWindowOpen())
    {
        eliPaintUI.RegisterInput();
        eliPaintUI.Update();        
    }

    return 0;
};