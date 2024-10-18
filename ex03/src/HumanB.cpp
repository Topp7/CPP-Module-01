/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:42:17 by stopp             #+#    #+#             */
/*   Updated: 2024/10/16 16:48:56 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	_armed = false;
}

HumanB::~HumanB()
{

}

void	HumanB::attack(void)
{
	if (_armed == true)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacks with nothing" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	_armed = true;
	_weapon = &weapon;
}
