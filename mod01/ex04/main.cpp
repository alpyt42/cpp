/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-cont <ale-cont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 18:01:10 by ale-cont          #+#    #+#             */
/*   Updated: 2023/04/27 19:15:44 by ale-cont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

// void	replacestrings(std::ifstream ifs, std::ofstream ofs, char **argv) {
	
// }

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Please provide <filename> <string1> <string2>" << std::endl;
		return 1;
	}

	std::ifstream ifs(argv[1]);
	if (!ifs.is_open())
	{
		std::cerr << "Error: could not open input file '" << argv[1] << "'" << std::endl;
		return 1;
	}

	std::string	fd_output = std::string(argv[1]) + ".replace";
	std::ofstream ofs(fd_output.c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error: could not open output file '" << fd_output << "'" << std::endl;
		return 1;
	}
	std::string	line;
	std::string	newline;
	size_t		pos;
	size_t		start_pos;
	while (std::getline(ifs, line)) {
		start_pos = 0;
		while (true) {
			pos = line.find(argv[2], start_pos);
			if (pos == std::string::npos) {
				newline += line.substr(start_pos);
				break ;
			}
			else {
				newline += line.substr(start_pos, pos - start_pos);
				newline += argv[3];
				start_pos = pos + std::string(argv[2]).length();
			}
		}
		ofs << newline << std::endl;
	}
	ifs.close();
	ofs.close();

	std::cout << "File has been copied and pasted to '" << fd_output << "' and \n'"
				<< argv[2] << "' portion(s) was/were successfully replaced by '" << argv[3]
				<< "'." << std::endl;
	return 0;
}
