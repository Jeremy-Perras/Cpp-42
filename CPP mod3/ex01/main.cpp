# include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Jeremy");
    ScavTrap scavtrap("Damir");

    claptrap.attack("Damir");
    claptrap.beRepaired(3);
    claptrap.takeDamage(10);
    claptrap.attack("Damir");
    claptrap.beRepaired(3);
    claptrap.beRepaired(3);
    scavtrap.guardGate();
    scavtrap.attack("Jeremy");

}
