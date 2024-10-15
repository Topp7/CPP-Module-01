/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:36:45 by stopp             #+#    #+#             */
/*   Updated: 2024/10/15 17:49:43 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << "a Horde with less than 1 Zombie?" << std::endl;
		return (NULL);
	}
	Zombie *zomHorde = new Zombie[N];
	if (zomHorde == NULL)
	{
		std::cout << "Allocation failed!" << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		zomHorde[i].setname(name);
	return (zomHorde);
}
