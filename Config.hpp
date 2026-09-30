#ifndef CONFIG_HPP
#define CONFIG_HPP

// Защита от конфликтов Windows + SFML
#if defined(_WIN32) || defined(__WIN32__)
    #define WIN32_LEAN_AND_MEAN
    #define NOMINMAX
#endif

#include <SFML/Graphics.hpp>


#endif // CONFIG_HPP
#include <string>

const int WINDOW_WIDTH = 1920;
const int WINDOW_HEIGHT = 1080;
const std::string WINDOW_TITLE = "EliPaint";
