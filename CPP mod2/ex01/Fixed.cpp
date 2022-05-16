#include "Fixed.hpp"

Fixed::Fixed(void): _nbr(0)
{
    std::cout << "Default constructor Call" << std::endl;
    return ;
}

Fixed::Fixed(int nbr):
{
    std::cout << "Int constructor Call" << std::endl;
    return ;
}

Fixed::Fixed(float nbr):
{
    std::cout << "Float constructor Call" << std::endl;
    return ;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout <<"Copy constructor Call" <<std::endl;
    *this = src;
    return;
}

void Fixed::setRawBits(int const raw)
{
    std::cout <<"setRawBits member function called" <<std::endl;
    this->_nbr = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout <<"getRawBits member function called" <<std::endl;
    return(this->_nbr);
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout <<"Copy Assignement operator called" <<std::endl;
    if(this != &rhs)
        this->_nbr = rhs.getRawBits();
    return *this;
}

int Fixed::toInt(void) vonct
{
    return((int)this->_nbr >> this->_fractionalBits)
}

int Fixed::toFloat(void) vonct
{
    return((float)this->_nbr << (1 / this->_fractionalBits))
}

str::ostream & operator<<(std::ostream & o, Integer const & rh)
{
    o<<rhs.getRawBits();
    return(o);
}

Fixed::~Fixed(void)
{
    std::cout <<"Destructor called" <<std::endl;
}
