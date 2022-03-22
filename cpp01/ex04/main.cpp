/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 08:11:06 by jayi              #+#    #+#             */
/*   Updated: 2022/03/22 11:45:44 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

#define MAX_BUF 1024

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "인자는 3개만 허용됩니다." << std::endl;
		return (0);
	}
	else
	{
		const char *inputFileName = argv[1];
		std::string dst(argv[2]);
		std::string src(argv[3]);
		std::string fileSrc;
		std::string fileDst("");
		char buf[MAX_BUF];

		std::fstream inputFile;
		inputFile.open(inputFileName);
		if (inputFile.fail())
		{
			std::cerr << "\"" << inputFileName << "\" : 파일을 찾을 수 없습니다." << std::endl;
			return (0);
		}

		while (inputFile.getline(buf, sizeof(buf)))
		{
			std::string temp(buf);

			fileSrc += buf;
			if (temp.length() == MAX_BUF - 1)
				continue;
			fileSrc += '\n';
		}
		inputFile.close();

		std::fstream outputFile;
		std::string outputFileName(inputFileName);
		outputFileName += ".replace";
		const char *c_outputFileName = outputFileName.c_str();

		outputFile.open(c_outputFileName, std::ios_base::out);
		if (outputFile.fail())
		{
			std::cerr << "\"" << outputFileName << "\" : 파일을 찾을 수 없습니다." << std::endl;
			return (0);
		}

		size_t start;
		while ((start = fileSrc.find(dst)) != std::string::npos)
		{
			std::string temp = fileSrc.substr(0, start);

			fileDst += temp + src;
			fileSrc = fileSrc.substr(start + dst.length());
		}
		fileDst += fileSrc;

		outputFile << fileDst;
		outputFile.close();
	}
}
