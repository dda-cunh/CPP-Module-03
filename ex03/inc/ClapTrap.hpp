#ifndef	CLAPTRAP_HPP
# define	CLAPTRAP_HPP

# include <iostream>

const std::string	RESET = "\033[0m";
const std::string	BLACK = "\033[30m";
const std::string	RED = "\033[31m";
const std::string	GREEN = "\033[32m";
const std::string	YELLOW = "\033[33m";
const std::string	BLUE = "\033[34m";
const std::string	MAGENTA = "\033[35m";
const std::string	CYAN = "\033[36m";
const std::string	WHITE = "\033[37m";

class	ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const & src);
		ClapTrap & operator=(ClapTrap const & rhs);
		~ClapTrap(void);

		ClapTrap(std::string name);
		ClapTrap(std::string name, int hp, int ep, int ad);
		void			attack(const std::string& target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		void			status(void) const;
	protected:
		std::string	name;
		int			hp;
		int			ep;
		int			ad;
};

#endif