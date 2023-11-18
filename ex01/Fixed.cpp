#include "Fixed.hpp"

Fixed::Fixed()
{
	value = 0;
	std::cout<< "Default constructor called"<< std::endl;
}

Fixed::~Fixed()
{
	std::cout<< "Default Destructor called"<< std::endl;
}

Fixed::Fixed(const Fixed &source)
{
	std::cout << "Copy constructor called" <<std::endl;
	*this = source;
}

Fixed&  Fixed::operator = (const Fixed &source)
{
	if (this != &source)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		value = source.value;
	}
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return value;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

//01

Fixed::Fixed(const int v)
{
	std::cout << "Int constructor called"<<std::endl;
	value = v * (1 << fractional_bits);
}

Fixed::Fixed(const float v)
{
	std::cout << "Float constructor called" << std::endl;
	value = (v * (1 << fractional_bits));
}

float Fixed::toFloat(void) const
{
	float result = static_cast<float>(value) / (1 << fractional_bits);
	return result;
}

int Fixed::toInt(void) const
{
	return value / ( 1 << fractional_bits);
}

std::ostream &operator << (std::ostream &out,const Fixed &source)
{
	out << source.toFloat();
	return out;
}

