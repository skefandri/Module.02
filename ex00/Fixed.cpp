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
	value = source.getRawBits();
}

Fixed&  Fixed::operator = (const Fixed &source)
{
	if (this != &source)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		value = source.getRawBits();
	}.
	return (*this);
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" <<std::endl;
	return value;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}