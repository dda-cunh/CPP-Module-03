#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
{
	std::cout << "FragTrap Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Parametric constructor called" << std::endl;
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	return ;
}

void	FragTrap::attack(const std::string& target)
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
	std::cout << "FragTrap " + this->name + " attacks " + target + ", causing "
				<< this->ad << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->hp <= 0)
	{
		std::cout << this->name + " is dead" << std::endl;
		return ;
	}
	std::cout << this->name + " says: HIGHFIVE!"
				<< std::endl;
}
