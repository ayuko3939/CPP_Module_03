/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 11:38:01 by ohasega           #+#    #+#             */
/*   Updated: 2024/11/13 11:53:16 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// ===================== Constructor & Destructor =====================

ClapTrap::ClapTrap()
: _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor was called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::cout << "ClapTrap copy constructor was called" << std::endl;
	_name = src._name;
	_hitPoints = src._hitPoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor was called" << std::endl;
}

// ============================= Operator =============================

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (&src != this)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_energyPoints = src._energyPoints;
		_attackDamage = src._attackDamage;
	}
	return (*this);
}

// ============================== Getter ==============================

const std::string &ClapTrap::getName() const
{
	return (_name);
}

unsigned int ClapTrap::getHitPoint()
{
	return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints()
{
	return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage()
{
	return (_attackDamage);
}

// ========================== Public function =========================

void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no points!" << std::endl;
		return ;
	}
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " attacks " << target
	<< ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0 || amount >= _hitPoints)
	{
		std::cout << "ClapTrap " << _name << " died!" << std::endl;
		_hitPoints = 0;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " took " << amount
	<< " points of damage!" << std::endl;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap " << _name << " has no points!" << std::endl;
		return ;
	}
	_hitPoints += amount;
	_energyPoints -= 1;
	std::cout << "ClapTrap " << _name << " was repaired "
	<< amount << " points!" << std::endl;
}
