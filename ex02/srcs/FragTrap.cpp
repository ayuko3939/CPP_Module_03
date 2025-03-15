/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:20 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/13 12:15:11 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// ===================== Constructor & Destructor =====================

FragTrap::FragTrap() : ClapTrap("Default")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap constructor was called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	std::cout << "FragTrap copy constructor was called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor was called" << std::endl;
}

// ============================= Operator =============================

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
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

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap "  << _name
	<< " says: Alright, high five! Let's get pumped up together!" << std::endl;
}
