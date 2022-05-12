#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>


class Zombie
{
  public :
    zombie(void);
    ~zombie(void);



  private :
  std::string _name;
  void announce(void);
}



#endif
