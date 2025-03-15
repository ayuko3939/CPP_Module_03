/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:14:17 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/13 12:01:44 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// ===================== Constructor & Destructor =====================

ScavTrap::ScavTrap() : ClapTrap("Default")
{
	std::cout << "ScavTrap constructor was called" << std::endl;
	_hitPoints = defaultHitPoints;
	_energyPoints = defaultEnergyPoints;
	_attackDamage = defaultAttackDamage;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor was called" << std::endl;
	_hitPoints = defaultHitPoints;
	_energyPoints = defaultEnergyPoints;
	_attackDamage = defaultAttackDamage;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	std::cout << "ScavTrap copy constructor was called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor was called" << std::endl;
}

// ============================= Operator =============================

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (&src != this)
	{
		ClapTrap::operator=(src);
		// _name = src._name;
		// _hitPoints = src._hitPoints;
		// _energyPoints = src._energyPoints;
		// _attackDamage = src._attackDamage;
	}
	return (*this);
}

// ========================== Public function =========================

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap "  << _name << " has no points!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ScavTrap " << _name << " attacks " << target
	<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}
