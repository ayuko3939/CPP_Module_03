/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 21:14:00 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:43:23 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &src);

	void guardGate();
	void attack(const std::string &target);

	static const unsigned int defaultHitPoints = 100;
	static const unsigned int defaultEnergyPoints = 50;
	static const unsigned int defaultAttackDamage = 20;
};

#endif