#include "Zombie.hpp"

void randomChump(std::string name)
{
  Zombie *zombie;

  zombie = newzombie(name);
  zombie->announce();
  delete zombie;
}
