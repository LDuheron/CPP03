/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:43:02 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/06 19:34:07 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap a;
	ScavTrap b(a);

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

	b.guardGate();

	return (0);
}