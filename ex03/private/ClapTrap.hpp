/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:51:29 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 17:04:00 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:

	protected:
	
		static unsigned int	_defaultAttackDamage;
		static unsigned int	_defaultEnergyPoints;
		static unsigned int	_defaultHitPoints;
		static std::string	_defaultName;
		
		std::string	_name;
		unsigned int		_attackDamage;
		unsigned int		_energyPoints;
		unsigned int		_hitPoints;
		
		ClapTrap( unsigned int _attackDamage, unsigned int _energyPoints, unsigned int _hitPoints);

	public:

		ClapTrap();
		ClapTrap( ClapTrap const & src );
		
		~ClapTrap();

		std::string const	&getName(void) const;
		unsigned int const			&getAttackDamage(void) const;
		unsigned int const			&getEnergyPoints(void) const;
		unsigned int const			&getHitPoints(void) const;

		void	setName(std::string const &name);
		void	setAttackDamage(unsigned int const attackDamage);
		void	setEnergyPoints(unsigned int const energyPoints);
		void	setHitPoints(unsigned int const hitPoints);

		ClapTrap &		operator=( ClapTrap const & rhs );

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};

std::ostream &		operator<<(std::ostream & lhs, ClapTrap const & rhs );


#endif