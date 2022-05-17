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
    // std::cout <<"setRawBits member function called" <<std::endl;
    this->_nbr = raw;
}

int Fixed::getRawBits(void) const
{
    // std::cout <<"getRawBits member function called" <<std::endl;
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
// News operators + * - / :

Fixed Fixed::operator+(Fixed const & rhs) const
{
    return(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
    return(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
    return(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
    return(this->toFloat() / rhs.toFloat());
}

// News operators > < >= <= == != / :

bool Fixed::operator>(Fixed const & rhs) const
{
    return(this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
    return(this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
    return(this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
    return(this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
    return(this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
    return(this->getRawBits() != rhs.getRawBits());
}

// News operators ++ -- :
//opérateur de pré-incrémentation
Fixed Fixed::operator++(int)
{
    Fixed	nb(*this);

    ++(*this);
    return (nb);

}

Fixed Fixed::operator--(int)
{
    Fixed	nb(*this);

    --(*this);
    return (nb);

}
//opérateur de post-incrémentation
Fixed &Fixed::operator++()
{
    this->_nbr++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_nbr--;
    return (*this);
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
	return (nb1< nb2 ? nb1 : nb2);
}

Fixed const &Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
	return (nb1 < nb2 ? nb1 : nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
	return (nb1 > nb2 ? nb1 : nb2);
}

Fixed const &Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
	return (nb1 > nb2 ? nb1 : nb2);
}
