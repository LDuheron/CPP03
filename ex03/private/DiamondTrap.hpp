/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:16:39 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/07 09:21:40 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

////// VIRTUAL 


#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include <string>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
		static unsigned int	_defaultAttackDamage;
		static unsigned int	_defaultEnergyPoints;
		static unsigned int	_defaultHitPoints;

	public:

		DiamondTrap();
		DiamondTrap( DiamondTrap const & src );
		~DiamondTrap();

		DiamondTrap &		operator=( DiamondTrap const & rhs );

		void	whoAmI();

};

std::ostream &			operator<<( std::ostream & o, DiamondTrap const & i );

#endif