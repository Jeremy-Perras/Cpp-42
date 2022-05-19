# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main()
{
    ClapTrap claptrap("Damir");
    ScavTrap scavtrap("Jeremy");
    FragTrap fragtrap("Test");

    claptrap.attack("Damir");
    claptrap.beRepaired(3);
    claptrap.takeDamage(10);
    claptrap.attack("Damir");
    claptrap.beRepaired(3);
    claptrap.beRepaired(3);
    scavtrap.guardGate();
    scavtrap.attack("Jeremy");
    fragtrap.highFivesGuys();
    fragtrap.attack("Jeremy");

}
