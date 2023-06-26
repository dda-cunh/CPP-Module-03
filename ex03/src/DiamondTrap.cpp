#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), name("Default")
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src)
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
	std::cout << "DiamondTrap Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hp = rhs.hp;
		this->ep = rhs.ep;
		this->ad = rhs.ad;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name)
{
	std::cout << "DiamondTrap Parametric constructor called" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->name << "\tClap Name: " << this->ClapTrap::name;
	return ;
}
