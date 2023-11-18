#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
    private:
        int value;
        static int const  fractional_bits = 8;
    public:
        Fixed();
        Fixed(const int v);
        Fixed(const float v);
        Fixed(const Fixed &source);
        ~Fixed();
        Fixed &operator = (const Fixed &source);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
        //02
        bool operator > (Fixed const &obj) const;
        bool operator < (Fixed const &obj) const;
        bool operator >= (Fixed const &obj);
        bool operator <= (Fixed const &obj);
        bool operator == (Fixed const &obj);
        bool operator != (Fixed const &obj);

        Fixed  operator + (Fixed const &obj);
        Fixed  operator - (Fixed const &obj);
        Fixed  operator * (Fixed const &obj);
        Fixed  operator / (Fixed const &obj);

        Fixed&  operator++ (void); //Pre
        Fixed  operator++ (int); //post
        Fixed&  operator-- (void); //pre
        Fixed  operator-- (int); //post

        static Fixed& min(Fixed &obj1, Fixed &obj2);
        static const Fixed& min(Fixed const &obj1, Fixed const &obj2);
        static Fixed& max(Fixed &obj1, Fixed &obj2);
        static const Fixed& max(Fixed const &obj1, Fixed const &obj2);
};

std::ostream &operator << (std::ostream& out,const Fixed &source);

#endif