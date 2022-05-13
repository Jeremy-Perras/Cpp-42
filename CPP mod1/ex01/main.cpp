#include "Zombie.hpp"

int main(void)
{
  Zombie *zombie;
  zombie = zombieHorde(5, "test");
  delete[] zombie;
}
