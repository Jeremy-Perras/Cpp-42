#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
  public:
    Fixed(void);
    Fixed& operator=(Fixed const & rhs);
    Fixed(Fixed const &src);
    Fixed(const int nbr);
    Fixed(const float nbr);
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;

  private:
    int _nbr;
    int const static _fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
