#ifndef TERUSTO_header
#define TERUSTO_header
#include <iostream>
#include <string_view>
#include "CX_RGB.h"
namespace CX
{
    
    enum COLOUR
    {
        BLACK,
        RED,
        GREEN,
        YELLOW,
        BLUE,
        MAGENTA,
        CYAN,
        WHITE,
        null,
        DEFAULT
    };
    enum class INPUT_MODE
    {
        DEFAULT,
        TERUSTO
    };
    enum class EFFECT_MODE
    {
        DEFAULT,
        RECORD
    };
    class TERUSTO
    {
        std::string on_screen{};
        template <typename T>
        inline void unit_print(const T &unit)
        {
            std::cout << unit;
            on_screen += unit;
        }
        inline void unit_print(const double unit)
        {
            std::cout << unit;
            on_screen += std::to_string(unit);
        }
        inline void unit_print(const int unit)
        {
            std::cout << unit;
            on_screen += std::to_string(unit);
        }

    public:
        // variables
        // inline static INPUT_MODE input_mode{INPUT_MODE::DEFAULT};
        EFFECT_MODE effect_mode{EFFECT_MODE::DEFAULT};
        // constructor
        TERUSTO()
        {
            std::cout << "\033[0m\033[2J\033[H";
        }

        // implementations
        inline void TXT_COLOUR(const COLOUR colour = COLOUR::DEFAULT);
        inline void TXT_COLOUR(const int r, const int g, const int b);
        inline void TXT_COLOUR(const RGB &colour);
        inline void TXT_COLOUR(const RGB *colour);
        inline void TXT_BG(const COLOUR colour = COLOUR::DEFAULT);
        inline void TXT_BG(const int r, const int g, const int b);
        inline void TXT_BG(const RGB &colour);
        inline void TXT_BG(const RGB *colour);
        inline void UP(short times = 1);
        inline void DOWN(short times = 1);
        inline void RIGHT(short times = 1);
        inline void LEFT(short times = 1);

        // extra functionality
        // terminal clear + cursor reset
        inline void RESET()
        {
            std::cout << "\033[0m\033[2J\033[H\033[0m";
            if (effect_mode == EFFECT_MODE::RECORD)
            {
                on_screen = "";
            }
        }
        // terminal clear
        inline void CLEAR()
        {
            std::cout << "\033[0m\033[2J";
            if (effect_mode == EFFECT_MODE::RECORD)
            {
                on_screen = "";
            }
        }
        // effect clear
        inline void FX_CLEAR()
        {
            std::cout << "\033[0m";
            if (effect_mode == EFFECT_MODE::RECORD)
            {
                on_screen += "\033[0m";
            }
        }
        // text formatting
        inline void BOLD() { std::cout << "\033[1m"; }
        // add number data type
        inline void ADD(const int unit) { on_screen += std::to_string(unit); }
        inline void ADD(const double unit) { on_screen += std::to_string(unit); }

        template <typename T>
        inline void ADD(const T &unit) { on_screen += unit; }
        // print function (it records printed data for easy formatting)
        // output
        template <typename... T>
        inline void OUTPUT(const T &...unit_set)
        {
            (unit_print(unit_set), ...);
        }
        inline void PRINT_PREV()
        {
            std::cout << on_screen;
        }
    };
} // namespace CX
#endif