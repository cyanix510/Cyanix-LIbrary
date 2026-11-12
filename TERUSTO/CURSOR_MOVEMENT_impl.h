#include "TERUSTO.h"
namespace CX
{
    inline void TERUSTO::UP(short times)
    {
        std::cout << "\033[" << times << "A" << std::flush;
    }
    inline void TERUSTO::DOWN(short times)
    {
        std::cout << "\033[" << times << "B" << std::flush;
    }
    inline void TERUSTO::RIGHT(short times)
    {
        std::cout << "\033[" << times << "C" << std::flush;
    }
    inline void TERUSTO::LEFT(short times)
    {
        std::cout << "\033[" << times << "D" << std::flush;
    }
}