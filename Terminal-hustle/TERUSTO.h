#ifndef TERUSTO_header
#def TERUSTO_header
#include <iostream>
#include <string_view>
namespace CX
{
enum CLR
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
    inline static INPUT_MODE input_mode{INPUT_MODE::DEFAULT};

    // constructor
    TERUSTO()
    {
        std::cout << "\033[0m\033[2J\033[H";
    }
    TERUSTO(const INPUT_MODE &arg) { input_mode = arg; }

    // text background interface
    // easy colour interface
    inline void TXT_BG(const CLR colour = CLR::DEFAULT) { std::cout << "\033[" << 40 + colour << 'm'; }
    // 24-bit true colour interface
    inline void TXT_BG(const int r, const int g, const int b) { std::cout << "\033[48;2;" << r << ";" << g << ";" << b << "m"; }

    // text colour interface
    // easy colour interface
    inline void TXT_CLR(const CLR colour = CLR::DEFAULT) { std::cout << "\033[" << 30 + colour << 'm'; }
    // 24-bit true colour interface
    inline void TXT_CLR(const int r, const int g, const int b) { std::cout << "\033[38;2;" << r << ";" << g << ";" << b << "m"; }

    // extra functionality
    // terminal clear
    inline void CLEAR() { std::cout << "\033[0m\033[2J\033[H"; }
    // effect clear
    inline void FX_CLEAR() { std::cout << "\033[0m"; }
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
    // input
    template <typename T>
    inline void INPUT(T &unit, const INPUT_MODE &inp_m = input_mode)
    {
        if (inp_m == INPUT_MODE::TERUSTO)
        {
            FX_CLEAR();
            BOLD();
            TXT_CLR(CLR::BLACK);
            TXT_BG(CLR::WHITE);
            std::cin >> unit;
            ADD(unit);
            ADD("\n");
            CLEAR();
            std::cout << on_screen;
        }
        else
        {
            std::cin >> unit;
            ADD(unit);
        }
    }
};
} // namespace CX
#endif