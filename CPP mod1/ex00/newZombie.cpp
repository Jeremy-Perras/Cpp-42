#include "Zombie.hpp"

Zombie* newzombie(std::string name)
{
  Zombie *zombie;
  zombie = new Zombie(name);
  return(zombie);
}
