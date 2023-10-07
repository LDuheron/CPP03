/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 08:49:00 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/07 08:55:28 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

unsigned int	FragTrap::_defaultAttackDamage(30);
unsigned int	FragTrap::_defaultEnergyPoints(100);
unsigned int	FragTrap::_defaultHitPoints(100);


// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `FragTrap` instance,
 * 			initializing its attributes to FragTrap default values.
 * 
 * @return	The newly created FragTrap instance.
 */
// FragTrap::FragTrap() : _name("Jonathan"), _attackDamage(FragTrap::_defaultAttackDamage),
// _energyPoints(FragTrap::_defaultEnergyPoints),_hitPoints(FragTrap::_defaultHitPoints)
// {
// 	std::cout << "FragTrap default constructor called.\n";
// }

FragTrap::FragTrap() : ClapTrap(_defaultAttackDamage, _defaultEnergyPoints, _defaultHitPoints)
{
	std::cout << "FragTrap default constructor called.\n";
}


/**
 * @brief	Construct a new `FragTrap` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor called.\n";
}

// Destructor ------------------------------------------------------------------

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called.\n";
}

// Accessors ------------------------------------------------------------------

std::string const	&FragTrap::getName(void) const
{
	return (this->_name);
}

unsigned int const			&FragTrap::getAttackDamage(void) const
{
	return (this->_defaultAttackDamage);
}

unsigned int const			&FragTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int const			&FragTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void	FragTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	FragTrap::setAttackDamage(unsigned int const attackDamage)
{
	this->_attackDamage = attackDamage;
}

void	FragTrap::setEnergyPoints(unsigned int const energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	FragTrap::setHitPoints(unsigned int const hitPoints)
{
	this->_hitPoints = hitPoints;
}

// Overload --------------------------------------------------------------------

FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

std::ostream &		operator<<(std::ostream & lhs, FragTrap const & rhs )
{
	lhs << "FragTrap " << rhs.getName() << " has " 
	<< rhs.getAttackDamage() << " attack damage, " 
	<< rhs.getEnergyPoints() << " energy points and " 
	<< rhs.getHitPoints() << " hit points.\n";
	return (lhs);
}

// Functions -------------------------------------------------------------------

void FragTrap::highFivesGuys()
{
	std::cout << "High fives guys ?!!!\n";
}
