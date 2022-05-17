#include "Fixed.hpp"

Fixed::Fixed(void): _nbr(0)
{
    std::cout << "Default constructor Call" << std::endl;
    return ;
}

Fixed::Fixed(const int nbr)
{
    this->_nbr = nbr << this->_fractionalBits;
    std::cout << "Int constructor Call" << std::endl;
    return;
}

Fixed::Fixed(const float nbr)
{
    this->_nbr = roundf(nbr * (1 << _fractionalBits));
    std::cout << "Float constructor Call" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout <<"Copy constructor Call" <<std::endl;
    *this = src;
    return;
}

void Fixed::setRawBits(int const raw)
{
    this->_nbr = raw;
}

int Fixed::getRawBits(void) const
{
    return(this->_nbr);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout <<"Copy Assignement operator called" <<std::endl;
    if(this != &rhs)
        this->_nbr = rhs.getRawBits();
    return *this;
}

int Fixed::toInt(void) const
{
    return((int)this->_nbr >> this->_fractionalBits);
}

float Fixed::toFloat(void) const
{
    return ((float)this->_nbr / (float)(1 << this->_fractionalBits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & rhs)
{
    o << rhs.toFloat();
    return(o);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}
