/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:59:20 by stopp             #+#    #+#             */
/*   Updated: 2024/10/15 17:53:24 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	Zombie* zombie_tim = newZombie("Tim");

	zombie_tim->announce();
	delete zombie_tim;

	std::cout << std::endl;

	randomChump("Tom");
}
