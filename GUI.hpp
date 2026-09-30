#include "Config.hpp" 

class GUI
{
    private:
        sf::RenderWindow window;
    public:
        GUI();
        ~GUI();
        int Update();
        int RegisterInput();
        bool IsWindowOpen();
};
