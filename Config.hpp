#ifndef CONFIG_HPP
#define CONFIG_HPP

// Защита от конфликтов Windows + SFML
#if defined(_WIN32) || defined(__WIN32__)
    #define WIN32_LEAN_AND_MEAN
    #define NOMINMAX
#endif

#include <SFML/Graphics.hpp>

#endif // CONFIG_HPP