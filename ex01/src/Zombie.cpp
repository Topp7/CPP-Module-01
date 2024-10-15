/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:59:27 by stopp             #+#    #+#             */
/*   Updated: 2024/10/15 17:52:10 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "\033[0;32mZombie " << _name << " created!\033[0m" << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
	std::cout << "\033[0;32mZombie " << _name << " created!\033[0m" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "\033[0;31mZombie " << _name << " killed!\033[0m" << std::endl;
}

void	Zombie::setname(std::string name)
{
	_name = name;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
