/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:14:38 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/05 11:23:00 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap		Ares("Ares");

	std::cout << std::endl;

	while (1)
	{
		Ares.attack("Athena");
		if (Ares.getHitPoint() == 100)
			Ares.guardGate();
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
