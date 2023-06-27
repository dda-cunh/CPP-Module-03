#ifndef	DIAMONDTRAP_HPP
# define	DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class	DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const & src);
		DiamondTrap & operator=(DiamondTrap const & rhs);
		~DiamondTrap(void);

		DiamondTrap(std::string name);
		void	whoAmI();
		using	ScavTrap::attack;
	private:
		std::string	name;
};

#endif