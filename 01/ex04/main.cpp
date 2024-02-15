/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:00:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/09/21 09:45:52 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

# define BRED	"\e[1;31m"
# define BGRN	"\e[1;32m"
# define BYEL	"\e[1;33m"
# define BBLU	"\e[1;34m"
# define BMAG	"\e[1;35m"
# define BCYN	"\e[1;36m"
# define BWHT	"\e[1;37m"
# define CRESET	"\e[0m"

std::string	findAndReplace(std::string line, std::string regex, std::string replacement) {
	int	from = line.find(regex);

	if (from == -1)
		return (line);
	line.erase(from, regex.length());
	line.insert(from, replacement);
	return (line);
}

void	replaceProcess(std::ifstream & inFile, std::ofstream & outFile, std::string find, std::string replace) {
	std::string	line;

	std::getline(inFile, line);
	while (1)
	{
		std::string from = line;

		line = findAndReplace(line, find, replace);
		if (from == line)
			break ;
	}
	outFile << line << std::endl;
}

int main(int argc, char **argv) {
	/* Check if args are correct */
	if (argc != 4) {
		std::cerr << BRED "./replace <filename> <find> <replace>" CRESET << std::endl;
		return (1);
	}
	std::string	fileName = argv[1];
	std::string find = argv[2];
	std::string	replace = argv[3];

	if (fileName.empty() || find.empty() || replace.empty()) {
		std::cerr << BRED "You can't insert empty arguments." CRESET << std::endl;
		return (1);
	}
	/* Read from in file */
	std::ifstream	inFile(fileName.data());
	if (!inFile.is_open()) {
		std::cerr << BRED "Input file cannot be opened!" CRESET << std::endl;
		return (1);
	}
	/* Create and open out file */
	std::ofstream	outFile(fileName.append(".replace").data());
	if (!outFile.is_open()) {
		std::cerr << BRED "Output file cannot be created!" CRESET << std::endl;
		return (1);
	}
	/* Loop into in file */
	while (!inFile.eof())
		replaceProcess(inFile, outFile, find, replace);
	/* Closing files */
	inFile.close();
	outFile.close();
	
	std::cout << BGRN "The task has been completed." CRESET << std::endl;
	return (0);
}