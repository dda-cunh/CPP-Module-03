#include "../inc/FragTrap.hpp"

void	test(ClapTrap & p1, ScavTrap & p2, FragTrap & p3)
{
	static int	gameState = 0;

	switch (gameState)
	{
		case 0:
			std::cout << "Early game" << std::endl;
		break;
		case 1:
			std::cout << "Mid game" << std::endl;
		break;
		default:
			std::cout << "Late game" << std::endl;
		break;
	}
	gameState++;
	p1.attack("Bandit");
	p3.attack("Wall");
	p2.attack("Carriage");
	p2.attack("Wall");
	p2.attack("Enemy");
	p1.takeDamage(5);
	p2.takeDamage(5);
	p3.takeDamage(30);
	p1.beRepaired(1);
	p2.beRepaired(3);
	p2.guardGate();
	p3.beRepaired(2);
	p3.highFivesGuys();
	return ;
}

int	main(void)
{
	ClapTrap	p1("John");
	ScavTrap	p2("Arthur");
	FragTrap	p3("Michael");

	for (int i = 1; i <= 3; i++)
	{
		test(p1, p2, p3);
		p1.status();
		p2.status();
		p3.status();
	}
	return (0);
}
