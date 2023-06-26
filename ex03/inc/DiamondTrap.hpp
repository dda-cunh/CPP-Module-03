#ifndef	DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP

# include "FragTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);

		DiamondTrap(std::string name);
		void	whoAmI();
		using	FragTrap::hp;
		using	ScavTrap::ep;
		using	FragTrap::ad;
		using	ScavTrap::attack;
	private:
		std::string	name;
};

#endif