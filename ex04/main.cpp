/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsoubaig <bsoubaig@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 11:00:24 by bsoubaig          #+#    #+#             */
/*   Updated: 2023/08/12 19:47:16 by bsoubaig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

#define C_RESET "\x1b[0m"
#define C_RED	"\x1b[31m\x1b[1m"
#define C_GRY	"\x1b[90m\x1b[1m"
#define C_GRN	"\x1b[32m\x1b[1m"

std::string	findAndReplace(std::string line, std::string regex, std::string replacement)
{
	int	from = line.find(regex);

	if (from == -1)
		return (line);
	line.erase(from, regex.length());
	line.insert(from, replacement);
	return (line);
}

void	replaceProcess(std::ifstream & inFile, std::ofstream & outFile, std::string find, std::string replace)
{
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

int main(int argc, char **argv)
{
	/* Check if args are correct */
	if (argc != 4)
	{
		std::cerr << C_RED << "./replace <filename> <find> <replace>" << std::endl;
		return (1);
	}
	std::string	fileName = argv[1];
	std::string find = argv[2];
	std::string	replace = argv[3];

	if (fileName.empty() || find.empty() || replace.empty())
	{
		std::cerr << C_RED << "You can't insert empty arguments." << C_RESET << std::endl;
		return (1);
	}
	/* Read from in file */
	std::ifstream	inFile(fileName.data());
	if (!inFile.is_open())
	{
		std::cerr << C_RED << "Input file cannot be opened!" << C_RESET << std::endl;
		return (1);
	}
	/* Create and open out file */
	std::ofstream	outFile(fileName.append(".replace").data());
	if (!outFile.is_open())
	{
		std::cerr << C_RED << "Output file cannot be created!" << C_RESET << std::endl;
		return (1);
	}
	/* Loop into in file */
	while (!inFile.eof())
		replaceProcess(inFile, outFile, find, replace);
	/* Closing files */
	inFile.close();
	outFile.close();
	return (0);
}