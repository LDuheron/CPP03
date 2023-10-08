/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:16:39 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 20:16:28 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string			_name;
		using ClapTrap::_defaultName;
		using FragTrap::_defaultAttackDamage;
		using ScavTrap::_defaultEnergyPoints;
		using FragTrap::_defaultHitPoints;

	public:

		DiamondTrap();
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & src );
		DiamondTrap( unsigned int _attackDamage, unsigned int _energyPoints, unsigned int _hitPoints);
		~DiamondTrap();

		std::string const		&getName(void) const;
		unsigned int const		&getAttackDamage(void) const;
		unsigned int const		&getEnergyPoints(void) const;
		unsigned int const		&getHitPoints(void) const;

		void					setName(std::string const &name);
		void					setAttackDamage(unsigned int const attackDamage);
		void					setEnergyPoints(unsigned int const energyPoints);
		void					setHitPoints(unsigned int const hitPoints);

		DiamondTrap &			operator=( DiamondTrap const & rhs );

		using					ScavTrap::attack;
		void					whoAmI();

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif