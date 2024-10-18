/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:49:38 by stopp             #+#    #+#             */
/*   Updated: 2024/10/18 14:33:18 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{

}

Harl::~Harl()
{

}

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didnt put enough bacon in my burger! If you did, I wouldnt be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	int			i = 0;
	std::string	levels[4] = {"DEBUG", "INFO", "WARINING", "ERROR"};
	void		(Harl::*fnc_ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	while (i < 4)
	{
		if (level == levels[i])
		{
			(this->*fnc_ptr[i])();
			return ;
		}
		i++;
	}
	std::cout << "No Levels match" << std::endl;
}
