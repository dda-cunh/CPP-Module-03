#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hp(10), ep(10), ad(0)
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "Default";
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
	std::cout << "Copy Assignement operator called" << std::endl;
	if (this != &rhs)
	{
		this->name = rhs.name;
		this->hp = rhs.hp;
		this->ep = rhs.ep;
		this->ad = rhs.ad;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : name(name), hp(10), ep(10), ad(0)
{
	std::cout << "Parametric constructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
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
	std::cout << "ClapTrap " + this->name + " attacks " + target + ", causing "
				<< this->ad << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp <= 0)
	{
		std::cout << this->name + " is dead" << std::endl;
		return ;
	}
	this->hp -= amount;
	if (this->hp < 0)
		this->hp = 0;
	std::cout << "ClapTrap " + this->name + " takes " << amount
				<< " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hp <= 0)
	{
		std::cout << this->name + " is dead" << std::endl;
		return ;
	}
	if (this->ep <= 0)
	{
		std::cout << this->name + " doesn't have enough energy to repair"
					<< std::endl;
		return ;
	}
	this->ep--;
	this->hp += amount;
	std::cout << "ClapTrap " + this->name + " repairs it self by " << amount
				<< " hit points!" << std::endl;
	return ;
}

void	ClapTrap::status(void) const
{
	std::cout << this->name + " status\t HP: " << this->hp << " EP: " << this->ep
				<< std::endl; 
	return ;
}
