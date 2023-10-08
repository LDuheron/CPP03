/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:43:02 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 17:32:32 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a;
	DiamondTrap b(a);

	// std::cout << a;
	std::cout << b;
	std::cout << "\n";

	b.attack("Karim");
	std::cout << b;
	std::cout << "\n";

	b.takeDamage(4);
	std::cout << b;
	std::cout << "\n";

	b.beRepaired(2);
	std::cout << b;
	std::cout << "\n";

	b.highFivesGuys();

	return (0);
}