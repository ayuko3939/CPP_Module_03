/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 12:14:38 by yohasega          #+#    #+#             */
/*   Updated: 2024/11/05 11:22:43 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap		Ares("Ares");

	std::cout << std::endl;

	while (1)
	{
		Ares.attack("Athena");
		Ares.takeDamage(5);
		if (Ares.getHitPoint() == 0)
			break;
		Ares.beRepaired(2);
		if (Ares.getEnergyPoints() == 0)
			break;
	}

	std::cout << std::endl;

	return (0);
}
