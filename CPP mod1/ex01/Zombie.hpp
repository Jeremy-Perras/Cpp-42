#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>
# include <string>

class Zombie
{
  public :
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    void announce(void);
    void zombieName(std::string name);

  private :
  std::string _name;
};

Zombie* newzombie(std::string name);
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);



#endif
