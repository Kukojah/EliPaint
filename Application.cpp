#include "Application.hpp"

Application::Application() {};

Application::~Application() {};

int Application::Run()
{
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (eliPaintUI.window.isOpen()) {
        sf::Event event;
        while (eliPaintUI.window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                eliPaintUI.window.close();
        }

        eliPaintUI.window.clear();
        eliPaintUI.window.draw(shape);
        eliPaintUI.window.display();
    }

    return 0;
};