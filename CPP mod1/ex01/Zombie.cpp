#include "Zombie.hpp"

Zombie::Zombie(void)
{
  return;
}

Zombie::Zombie(std::string name) : _name(name)
{
  return;
}

Zombie::~Zombie(void)
{
  std::cout << this->_name;
  return;
}

void Zombie::announce(void)
{
  std::cout << this->_name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::zombieName(std::string name)
{
  this->_name = name;
}
