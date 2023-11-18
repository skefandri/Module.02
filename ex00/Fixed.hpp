#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    private:
        int value;
        static int const  fractional_bits = 8;
    public:
        Fixed();
        Fixed(const Fixed &source);
        ~Fixed();
        Fixed &operator = (const Fixed &source);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

#endif