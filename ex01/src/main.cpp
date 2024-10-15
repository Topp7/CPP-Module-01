/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 17:59:20 by stopp             #+#    #+#             */
/*   Updated: 2024/10/15 18:09:40 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int	main(void)
{
	int	N;

	N = 10;
	Zombie* zombie_horde = zombieHorde(N, "Olaf");

	for (int i = 0; i < N; i++)
	{
		std::cout << "Number: " << i + 1 << "  ";
		zombie_horde[i].announce();
	}
	delete[] zombie_horde;
}
