/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:17:48 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 14:49:09 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public virtual ClapTrap
{
	private:

	protected :

		static unsigned int		_defaultAttackDamage;
		static unsigned int		_defaultEnergyPoints;
		static unsigned int		_defaultHitPoints;

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		~FragTrap();

		std::string const		&getName(void) const;
		unsigned int const		&getAttackDamage(void) const;
		unsigned int const		&getEnergyPoints(void) const;
		unsigned int const		&getHitPoints(void) const;

		void					setName(std::string const &name);
		void					setAttackDamage(unsigned int const attackDamage);
		void					setEnergyPoints(unsigned int const energyPoints);
		void					setHitPoints(unsigned int const hitPoints);


		FragTrap &				operator=( FragTrap const & rhs );

		void					highFivesGuys(void);

};

std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif 