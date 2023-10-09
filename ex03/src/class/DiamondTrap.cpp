/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 09:10:32 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:05:48 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `DiamondTrap` instance,
 * 			initializing its attributes to DiamondTrap default values.
 * 
 * @return	The newly created DiamondTrap instance.
 */

DiamondTrap::DiamondTrap() : ClapTrap(DiamondTrap::_defaultName + std::string("_clap_name"), DiamondTrap::_defaultAttackDamage, 
DiamondTrap::_defaultEnergyPoints, DiamondTrap::_defaultHitPoints), ScavTrap(), FragTrap(), _name(DiamondTrap::_defaultName)
{
	std::cout << "DiamondTrap default constructor called.\n";
}

/**
 * @brief	Construct a new `DiamondTrap` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
DiamondTrap::DiamondTrap( const DiamondTrap & src ) : ClapTrap(src), ScavTrap(), FragTrap(), _name(src._name)
{
	std::cout << "DiamondTrap copy constructor called.\n";
}

DiamondTrap::DiamondTrap( std::string name ) :
ClapTrap(name + std::string("_clap_name"), DiamondTrap::_defaultAttackDamage, 
DiamondTrap::_defaultEnergyPoints, DiamondTrap::_defaultHitPoints), ScavTrap(), FragTrap(), _name(name)
{
	std::cout << "DiamondTrap name constructor called.\n";
}

// Destructor ------------------------------------------------------------------

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called.\n";
}

// Accessors ------------------------------------------------------------------

std::string const	&DiamondTrap::getName(void) const
{
	return (this->_name);
}

unsigned int const			&DiamondTrap::getAttackDamage(void) const
{
	return (this->_defaultAttackDamage);
}

unsigned int const			&DiamondTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int const			&DiamondTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void	DiamondTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	DiamondTrap::setAttackDamage(unsigned int const attackDamage)
{
	this->_attackDamage = attackDamage;
}

void	DiamondTrap::setEnergyPoints(unsigned int const energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	DiamondTrap::setHitPoints(unsigned int const hitPoints)
{
	this->_hitPoints = hitPoints;
}

// Overload --------------------------------------------------------------------

DiamondTrap &				DiamondTrap::operator=( DiamondTrap const & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
		this->ClapTrap::_name = rhs.ClapTrap::_name;
	}
	return *this;
}

std::ostream &		operator<<(std::ostream & lhs, DiamondTrap const & rhs )
{
	lhs << "DiamondTrap " << rhs.getName() << " has " 
	<< rhs.getAttackDamage() << " attack damage, " 
	<< rhs.getEnergyPoints() << " energy points and " 
	<< rhs.getHitPoints() << " hit points.\n";
	return (lhs);
}

// Functions -------------------------------------------------------------------

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << " and it's ClapTrap name is " << this->ClapTrap::_name << ".\n";
}
