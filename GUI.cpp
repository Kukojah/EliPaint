#include "GUI.hpp"

GUI::GUI() : window(sf::VideoMode( WINDOW_WIDTH, WINDOW_HEIGHT), WINDOW_TITLE) {};

GUI::~GUI() {};

int GUI::Update()
{
    window.clear();
    window.display();
    return 0;
}

int GUI::RegisterInput()
{
    sf::Event event;
    
    while (window.pollEvent(event))
    {
        if (event.type == sf::Event::Closed) 
        {
            window.close();
            return 1;
        }
    }

    return 0;
}

bool GUI::IsWindowOpen() { return window.isOpen(); }