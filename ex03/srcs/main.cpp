/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:14:38 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/13 11:59:46 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap		Ares("Ares");

	std::cout << std::endl;
	Ares.whoAmI();
	std::cout << Ares.getHitPoint() << std::endl;
	std::cout << Ares.getEnergyPoints() << std::endl;
	std::cout << Ares.getAttackDamage() << std::endl << std::endl;

	while (1)
	{
		if (Ares.getHitPoint() == FragTrap::defaultHitPoints)
			Ares.guardGate();
		Ares.attack("Athena");
		if (Ares.getHitPoint() > 60)
			Ares.highFivesGuys();
		Ares.takeDamage(30);
		if (Ares.getHitPoint() == 0)
			break;
		Ares.beRepaired(10);
		if (Ares.getEnergyPoints() == 0)
			break;
	}

	std::cout << std::endl;
	
	return (0);
}
