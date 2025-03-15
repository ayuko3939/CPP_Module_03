/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:14:38 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/05 11:23:19 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap		Ares("Ares");

	std::cout << std::endl;

	while (1)
	{
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
