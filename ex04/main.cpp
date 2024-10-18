/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stopp <stopp@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:36:21 by stopp             #+#    #+#             */
/*   Updated: 2024/10/18 12:37:35 by stopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Bad arguments" << std::endl;
		return (1);
	}
	std::string		filename = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];
	std::ifstream	file(filename);
	std::string		buf;
	size_t			pos;
	size_t			new_pos;
	std::ofstream	new_file(filename + ".replace");
	if (!(file.is_open()))
	{
		std::cout << "failed to open " << filename << std::endl;
		if (new_file.is_open())
			remove((filename + ".replace").c_str());
		return (1);
	}
	if (new_file.is_open())
	{
		while(getline(file, buf))
		{
			pos = buf.find(s1);
			new_pos = 0;
			while (pos != std::string::npos)
			{
				new_file << buf.substr(new_pos, pos - new_pos) << s2;
				new_pos = pos + s1.length();
				pos = buf.find(s1, new_pos);
			}
			new_file << buf.substr(new_pos) << std::endl;
		}
		new_file.close();
		file.close();
	}
	else
		std::cout << "failed to open new " << filename + ".replace" << std::endl;
	return (1);
	return (0);
}
