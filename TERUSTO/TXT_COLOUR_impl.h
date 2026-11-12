#include "TERUSTO.h"
namespace CX{
inline void TERUSTO::TXT_COLOUR (const COLOUR colour)
{
    std::cout << "\033[" << 30 + colour << 'm';
    if (effect_mode == EFFECT_MODE::RECORD)
    {
        on_screen += "\033[" + std::to_string(30 + colour) +'m';
    }
}
// 24-bit true colour interface
inline void TERUSTO::TXT_COLOUR (const int r, const int g, const int b)
{
    std::cout << "\033[38;2;" << r << ';' << g << ';' << b << 'm';
    if (effect_mode == EFFECT_MODE::RECORD)
    {
        on_screen += "\033[38;2;" + std::to_string(r) + ';' + std::to_string(g) + ';' + std::to_string(b) + 'm';
    }
}

// 24-bit true colour interface - RGB(R, G, B) // safe to use and performance friendly
inline void TERUSTO::TXT_COLOUR (const RGB &colour)
{
    std::cout << "\033[38;2;" << colour.RGB_arr[0] << ';' << colour.RGB_arr[1] << ';' << colour.RGB_arr[2] << 'm';
    if (effect_mode == EFFECT_MODE::RECORD)
    {
        on_screen += "\033[38;2;" + std::to_string(colour.RGB_arr[0]) + ';' + std::to_string(colour.RGB_arr[1]) + ';' + std::to_string(colour.RGB_arr[2]) + 'm';
    }
}
inline void TERUSTO::TXT_COLOUR (const RGB *colour)
{
    std::cout << "\033[38;2;" << *(colour->RGB_arr) << ';' << *(colour->RGB_arr + 1) << ';' << *(colour->RGB_arr + 2) << 'm';
    if (effect_mode == EFFECT_MODE::RECORD)
    {
        on_screen += "\033[38;2;" + std::to_string(*(colour->RGB_arr)) + ';' + std::to_string(*(colour->RGB_arr + 1)) + ';' + std::to_string(*(colour->RGB_arr + 2)) + 'm';
    }
}
}