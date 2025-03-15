/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohasega <yohasega@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:32:29 by yohasega          #+#    #+#             */
/*   Updated: 2024/12/21 18:43:21 by yohasega         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
  public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	~FragTrap();

	FragTrap &operator=(const FragTrap &src);

	void highFivesGuys(void);

	static const unsigned int defaultHitPoints = 100;
	static const unsigned int defaultEnergyPoints = 100;
	static const unsigned int defaultAttackDamage = 30;
};

#endif