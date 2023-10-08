/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:43:02 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/08 22:33:00 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap a("Meryem");
	DiamondTrap b;

	// std::cout << b;
	// std::cout << a;
	// std::cout << "\n";

	// a.attack("Karim");
	// std::cout << "\n";

	// a.whoAmI();
	// std::cout << "\n";

	// a.setName("Jonathan");
	// std::cout << "\n";

	a.whoAmI();
	std::cout << "\n";
	b.whoAmI();
	std::cout << "\n";

	// a.highFivesGuys();
	// std::cout << "\n";

	return (0);
}