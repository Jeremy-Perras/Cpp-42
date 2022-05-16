#ifndef FIXED_H
# define FIXED_H
# include <iostream>
# include <cmath>

class Fixed
{
  public:
    Fixed(void);
    Fixed(int const n);
    Fixed& operator(Sample const& rhs);
    Fixed(Fixed const &src);
    ~Fixed(void);



  private:
    int _nbr;
    int const static _fra;


};


#endif
