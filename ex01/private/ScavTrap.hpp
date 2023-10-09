/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:51:29 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 20:13:41 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:
		static unsigned int		_defaultAttackDamage;
		static unsigned int		_defaultEnergyPoints;
		static unsigned int		_defaultHitPoints;
		
	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
		~ScavTrap();

		std::string const		&getName(void) const;
		unsigned int const		&getAttackDamage(void) const;
		unsigned int const		&getEnergyPoints(void) const;
		unsigned int const		&getHitPoints(void) const;

		void					setName(std::string const &name);
		void					setAttackDamage(unsigned int const attackDamage);
		void					setEnergyPoints(unsigned int const energyPoints);
		void					setHitPoints(unsigned int const hitPoints);

		ScavTrap &				operator=( ScavTrap const & rhs );
		
		void					attack(const std::string& target);

		void 					guardGate();

};

std::ostream &		operator<<(std::ostream & lhs, ScavTrap const & rhs );


#endif