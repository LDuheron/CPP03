/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduheron <lduheron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:51:42 by lduheron          #+#    #+#             */
/*   Updated: 2023/10/09 15:09:08 by lduheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

unsigned int	ClapTrap::_defaultAttackDamage(0);
unsigned int	ClapTrap::_defaultEnergyPoints(10);
unsigned int	ClapTrap::_defaultHitPoints(10);
std::string		ClapTrap::_defaultName("Heidi");

// Constructor -----------------------------------------------------------------

/**
 * @brief	Create a new `ClapTrap` instance,
 * 			initializing its attributes to ClapTrap default values.
 * 
 * @return	The newly created ClapTrap instance.
 */
ClapTrap::ClapTrap() : _name(ClapTrap::_defaultName), _attackDamage(ClapTrap::_defaultAttackDamage),
_energyPoints(ClapTrap::_defaultEnergyPoints),_hitPoints(ClapTrap::_defaultHitPoints)
{
	std::cout << "Default constructor called.\n";
}

/**
 * @brief	Construct a new `ClapTrap` instance,
 * 			initializing its attributes using another instance as model.
 * 
 * @param	src is the model instance. 
 */
ClapTrap::ClapTrap( const ClapTrap & src ) : _name(src._name), _attackDamage(src._attackDamage),
_energyPoints(src._energyPoints), _hitPoints(src._hitPoints)
{
	std::cout << "Copy constructor called.\n";
}


ClapTrap::ClapTrap( unsigned int attackDamage, unsigned int energyPoints, unsigned int hitPoints) : 
_name(ClapTrap::_defaultName), _attackDamage(attackDamage), _energyPoints(energyPoints), _hitPoints(hitPoints)
{
	std::cout << "ClapTrap constructor called.\n";
}

// Destructor ------------------------------------------------------------------

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called.\n";
}

// Accessors ------------------------------------------------------------------

std::string const	&ClapTrap::getName(void) const
{
	return (this->_name);
}

unsigned int const			&ClapTrap::getAttackDamage(void) const
{
	return (this->_defaultAttackDamage);
}

unsigned int const			&ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

unsigned int const			&ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void	ClapTrap::setName(std::string const &name)
{
	this->_name = name;
}

void	ClapTrap::setAttackDamage(unsigned int const attackDamage)
{
	this->_attackDamage = attackDamage;
}

void	ClapTrap::setEnergyPoints(unsigned int const energyPoints)
{
	this->_energyPoints = energyPoints;
}

void	ClapTrap::setHitPoints(unsigned int const hitPoints)
{
	this->_hitPoints = hitPoints;
}

// Overload --------------------------------------------------------------------

ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_hitPoints = rhs._hitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return *this;
}

std::ostream &		operator<<(std::ostream & lhs, ClapTrap const & rhs )
{
	lhs << "ClapTrap " << rhs.getName() << " has " 
	<< rhs.getAttackDamage() << " attack damage, " 
	<< rhs.getEnergyPoints() << " energy points and " 
	<< rhs.getHitPoints() << " hit points.\n";
	return (lhs);
}

// Functions -------------------------------------------------------------------

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name 
		<< " can't do anything without energy points and hit points.\n";
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing "
		<< this->_attackDamage << " points of damage !\n";
		this->_energyPoints -= 1;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name 
		<< " can't do anything without energy points and hit points.\n";
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is attacked ! It has lost " << amount 
		<< " hit points.\n";
		if (this->_hitPoints < amount)
			this->_hitPoints = 0;
		else
			this->_hitPoints -= amount;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name 
		<< " can't do anything without energy points and hit points.\n";
	}
	else
	{
		std::cout << "ClapTrap " << this->_name << " is repairing itself, it gets "
		<< amount << " hit points back.\n";
		if (ClapTrap::_defaultHitPoints - this->_hitPoints < amount)
			this->_hitPoints = ClapTrap::_defaultHitPoints;
		else
			this->_hitPoints += amount;
		this->_energyPoints -= 1;
	}
}
