/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 13:04:48 by stopp             #+#    #+#             */
/*   Updated: 2024/10/16 15:10:09 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << "Memory address of string: " << &str << std::endl;
	std::cout << "Memory address of string pointer: " << str_ptr << std::endl;
	std::cout << "Memory address of string reference: " << &str_ref << std::endl;

	std::cout << "Value of the string: " << str << std::endl;
	std::cout << "value of the string pointer: " << *str_ptr << std::endl;
	std::cout << "Value of the string reference: " << str_ref << std::endl;
	return (0);
}
