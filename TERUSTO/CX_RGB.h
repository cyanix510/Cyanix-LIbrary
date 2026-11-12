#ifndef CX_RGB
#define CX_RGB
#include <vector>

namespace CX
{
    inline const short int lock_between(const short int value, const short int x, const short int y)
    {
        short int temp_val{};
        if (value < x)
        {
            temp_val = x;
        }
        else if (value > y)
        {
            temp_val = y;
        }
        else
        {
            temp_val = value;
        }
        return temp_val;
    }
    class RGB
    {
    protected:
        int RGB_arr[3]{
            255,
            255,
            255};

    public:
        RGB() {}
        RGB(const short int R, const short int G, const short int B) : RGB_arr{lock_between(R, 0, 255),
                                           lock_between(G, 0, 255),
                                           lock_between(B, 0, 255)} {}
        inline const int *get_colour() const { return &RGB_arr[0]; }
        inline const int *Get_RED() const { return &RGB_arr[0]; }
        inline const int *Get_GREEN() const { return &RGB_arr[1]; }
        inline const int *Get_BLUE() const { return &RGB_arr[2]; }
        inline const RGB* new_colour(const short int R, const short int G, const short int B)
        {
            RGB_arr[0] = lock_between(R, 0, 255);
            RGB_arr[1] = lock_between(G, 0, 255);
            RGB_arr[2] = lock_between(B, 0, 255);
            return this;
        }
        friend class TERUSTO;
    };

    //for creating many colours seemlessly
    std::vector<RGB> colours{};
    RGB* new_colour(const short R, const short G, const short B)
    {
        colours.push_back(RGB{R, G, B});
        return &colours[colours.size()-1];
    }
}
#endif
//Approved By Cyanix Official