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

    Fixed operator+(Fixed const & rhs)const ;
    Fixed operator-(Fixed const & rhs)const;
    Fixed operator*(Fixed const & rhs)const;
    Fixed operator/(Fixed const & rhs)const;
    bool operator>(Fixed const & rhs)const;
    bool operator<(Fixed const & rhs)const;
    bool operator>=(Fixed const & rhs)const;
    bool operator<=(Fixed const & rhs)const;
    bool operator==(Fixed const & rhs)const;
    bool operator!=(Fixed const & rhs)const;

    Fixed &operator ++();
    Fixed operator ++(int);
    Fixed &operator --();
    Fixed operator --(int);

    static Fixed &min(Fixed &nb1, Fixed &nb2);
    static Fixed const &min(const Fixed &nb1,const Fixed &nb2);
    static Fixed &max(Fixed &nb1, Fixed &nb2);
    static Fixed const &max(const Fixed &nb1,const Fixed &nb2);



  private:
    int _nbr;
    int const static _fractionalBits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif
