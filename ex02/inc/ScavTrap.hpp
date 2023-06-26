#ifndef	ScavTrap_HPP
# define	ScavTrap_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap & operator=(ScavTrap const & rhs);
		~ScavTrap(void);

		ScavTrap(std::string name);
		void	attack(const std::string& target);
		void	guardGate(void);
};

#endif