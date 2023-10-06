/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:43:02 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/06 17:11:52 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a;
	ClapTrap b(a);

	std::cout << a;
	std::cout << b;
	std::cout << "\n";

	a.attack("Karim");
	std::cout << a;
	std::cout << "\n";

	a.takeDamage(4);
	std::cout << a;
	std::cout << "\n";

	a.beRepaired(2);
	std::cout << a;
	std::cout << "\n";

	return (0);
}