#ifndef	FRAGTRAP_HPP
# define	FRAGTRAP_HPP

# include "ScavTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const & src);
		FragTrap & operator=(FragTrap const & rhs);
		~FragTrap(void);

		FragTrap(std::string name);
		void			attack(const std::string& target);
		void			highFivesGuys(void);
};

#endif