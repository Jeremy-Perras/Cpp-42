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
    ~Fixed(void);
    int getRawBits( void ) const;
    void setRawBits( int const raw );

  private:
    int _nbr;
    int const static _fractionalBits = 8;
};


#endif
