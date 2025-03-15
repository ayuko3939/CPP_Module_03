/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:58:46 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/13 12:33:54 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// ===================== Constructor & Destructor =====================

DiamondTrap::DiamondTrap()
: ClapTrap("Default_clap_name"), FragTrap("Default"), ScavTrap("Default"), _name("Default")
{
	std::cout << "DiamondTrap constructor was called" << std::endl;
	_hitPoints = FragTrap::defaultHitPoints;
	_energyPoints = ScavTrap::defaultEnergyPoints;
	_attackDamage = FragTrap::defaultAttackDamage;
}

DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
	std::cout << "DiamondTrap constructor was called" << std::endl;
	_hitPoints = FragTrap::defaultHitPoints;
	_energyPoints = ScavTrap::defaultEnergyPoints;
	_attackDamage = FragTrap::defaultAttackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
: ClapTrap(src), FragTrap(src), ScavTrap(src), _name(src._name)
{
	std::cout << "DiamondTrap copy constructor was called" << std::endl;
	_name = src._name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor was called" << std::endl;
}

// ============================= Operator =============================

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (&src != this)
	{
		ClapTrap::operator=(src);
		ScavTrap::operator=(src);
		FragTrap::operator=(src);
		_name = src._name;
		// _hitPoints = src._hitPoints;
		// _energyPoints = src._energyPoints;
		// _attackDamage = src._attackDamage;
	}
	return (*this);
}

// ========================== Public function =========================

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap : " << _name << "\nClapTrap : " << ClapTrap::_name << std::endl;
}
