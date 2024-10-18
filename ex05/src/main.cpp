/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 14:25:37 by stopp             #+#    #+#             */
/*   Updated: 2024/10/18 14:32:46 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int	main(void)
{
	Harl Karen;
	std::cout << "Level Showcase:" << std::endl;
	std::cout << "Debug Level: ";
	Karen.complain("DEBUG");
	std::cout << "Info Level: ";
	Karen.complain("INFO");
	std::cout << "Warning Level: ";
	Karen.complain("WARNING");
	std::cout << "Error Level: ";
	Karen.complain("ERROR");
	std::cout << "Invalid Level: ";
	Karen.complain("TEST");
}
