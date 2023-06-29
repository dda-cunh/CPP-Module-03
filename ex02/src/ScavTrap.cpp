#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("ScavTrap", 100, 50, 20)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & src) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
	std::cout << "ScavTrap Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Parametric constructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hp <= 0)
	{
		std::cout << this->name + " is dead" << std::endl;
		return ;
	}
	if (this->ep <= 0)
	{
		std::cout << this->name + " doesn't have enough energy to attack"
					<< std::endl;
		return ;
	}
	this->ep--;
	std::cout << "ScavTrap " + this->name + " attacks " + target + ", causing "
				<< this->ad << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
    if (this->hp <= 0)
	{
		std::cout << "Scavtrap " << this->name + " is dead" << std::endl;
		return ;
	}
    std::cout << this->name + " is now in Gate keeper mode"
				<< std::endl;
}
