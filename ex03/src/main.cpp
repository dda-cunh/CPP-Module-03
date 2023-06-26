#include "../inc/DiamondTrap.hpp"
#include <iostream>

void	test(DiamondTrap & p1)
{
	static int	gameState = 0;

	switch (gameState)
	{
		case 0:
			std::cout << GREEN << "Early game" << RESET << std::endl;
		break;
		case 1:
			std::cout << GREEN << "Mid game" << RESET << std::endl;
		break;
		default:
			std::cout << GREEN << "Late game" << RESET << std::endl;
		break;
	}
	p1.status();
	gameState++;
	std::cout << BLUE;
	p1.attack("Bandit");
	p1.takeDamage(5);
	p1.beRepaired(1);
	p1.beRepaired(1);
	p1.whoAmI();
	std::cout << RESET << std::endl;
	p1.status();
	return ;
}

int	main(void)
{
	std::cout << RED;
	DiamondTrap p1("Arthur");
	std::cout << RESET;
	for (int i = 1; i <= 3; i++)
	{
		test(p1);
	}
	std::cout << RED;
	return (0);
}
