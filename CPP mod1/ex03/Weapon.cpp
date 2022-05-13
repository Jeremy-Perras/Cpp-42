#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
  this->_type = name;
  return;
}

Weapon::~Weapon(void)
{
  return;
}

std::string const &Weapon::getType(void)
{
  std::string const& typeREF = this->_type;
  return(typeREF);
}

void Weapon::setType(std::string type)
{
  this->_type = type;
}
