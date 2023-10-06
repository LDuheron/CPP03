/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 17:49:36 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/06 19:30:57 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

unsigned int	ScavTrap::_defaultAttackDamage(20);
unsigned int	ScavTrap::_defaultEnergyPoints(50);
unsigned int	ScavTrap::_defaultHitPoints(100);


// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `ScavTrap` instance,
 * 			initializing its attributes to ScavTrap default values.
 * 
 * @return	The newly created ScavTrap instance.
 */
// ScavTrap::ScavTrap() : _name("Jonathan"), _attackDamage(ScavTrap::_defaultAttackDamage),
// _energyPoints(ScavTrap::_defaultEnergyPoints),_hitPoints(ScavTrap::_defaultHitPoints)
// {
// 	std::cout << "ScavTrap default constructor called.\n";
// }

ScavTrap::ScavTrap() : ClapTrap(_defaultAttackDamage, _defaultEnergyPoints, _defaultHitPoints)
{
	std::cout << "ScavTrap default constructor called.\n";
}


/**
 * @brief	Construct a new `ScavTrap` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called.\n";
}

// Accessors ------------------------------------------------------------------

std::string const	&ScavTrap::getName(void) const
{
	return (this->_name);
}

unsigned int const			&ScavTrap::getAttackDamage(void) const
{
	return (this->_defaultAttackDamage);
}

unsigned int const			&ScavTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int const			&ScavTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void	ScavTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	ScavTrap::setAttackDamage(unsigned int const attackDamage)
{
	this->_attackDamage = attackDamage;
}

void	ScavTrap::setEnergyPoints(unsigned int const energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ScavTrap::setHitPoints(unsigned int const hitPoints)
{
	this->_hitPoints = hitPoints;
}

// Overload --------------------------------------------------------------------

ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &		operator<<(std::ostream & lhs, ScavTrap const & rhs )
{
	lhs << "ScavTrap " << rhs.getName() << " has " 
	<< rhs.getAttackDamage() << " attack damage, " 
	<< rhs.getEnergyPoints() << " energy points and " 
	<< rhs.getHitPoints() << " hit points.\n";
	return (lhs);
}

// Functions -------------------------------------------------------------------

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << this->_name 
		<< " can't do anything without enery points and hit points.\n";
	}
	else
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attackDamage << " points of damage !\n";
		this->_energyPoints -= 1;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate Keeper mode.\n";
}
