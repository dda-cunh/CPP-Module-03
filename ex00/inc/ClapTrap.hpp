#ifndef	CLAPTRAP_HPP
# define	CLAPTRAP_HPP

# include <iostream>
#include <ostream>

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap(void);

		ClapTrap(std::string newName);
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	status(void) const;
	private:
		std::string	name;
		int			hp;
		int			ep;
		int			ad;
};

#endif