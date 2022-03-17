/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selector.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:21:37 by jayi              #+#    #+#             */
/*   Updated: 2022/03/17 08:41:53 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "selector.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>

void getlineNotAllowedEOF(std::string &input)
{
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(0);
}

void selector::run(phonebook *pb) {
	std::string command;

	while (std::cin.eof() == false)
	{
		std::cout << "----------------------------------------------" << std::endl;
		std::cout << "아래 명렁어 중 하나를 입력해주세요." << std::endl;
		std::cout << "- ADD" << std::endl;
		std::cout << "- SEARCH" << std::endl;
		std::cout << "- EXIT" << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
		std::cout << ">> ";
		getlineNotAllowedEOF(command);

		if (command.compare(COMMAND_ADD) == 0)
		{
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

			std::cout << "이름을 입력해주세요. >> ";
			getlineNotAllowedEOF(firstName);

			std::cout << "성을 입력해주세요. >> ";
			getlineNotAllowedEOF(lastName);

			std::cout << "별명을 입력해주세요. >> ";
			getlineNotAllowedEOF(nickName);

			std::cout << "휴대폰 번호을 입력해주세요. >> ";
			getlineNotAllowedEOF(phoneNumber);
			
			std::cout << "비밀을 입력해주세요. >> ";
			getlineNotAllowedEOF(darkestSecret);

			pb->add(firstName, lastName, nickName, phoneNumber, darkestSecret);
		}
		else if (command.compare(COMMAND_SEARCH) == 0)
		{
			unsigned int index;
			std::string	sIndex;

			if (pb->getNbContact() == 0)
			{
				std::cout << "연락처가 비었습니다." << std::endl;
				continue ;				
			}

			for (unsigned int idx = 0; idx < pb->getNbContact() && idx < MAX_CONTACT; idx++)
				pb->search(idx, idx == 0, false);

			std::cout << "원하는 인덱스를 입력해주세요. >> ";
			getlineNotAllowedEOF(sIndex);
			std::stringstream ssInt(sIndex);
			ssInt >> index;
			if (ssInt.fail())
			{
				std::cout << "인덱스로 변환하는데 실패했습니다." << std::endl;
				continue ;
			}
			
			pb->search(index, true, true);
		}
		else if (command.compare(COMMAND_EXIT) == 0)
		{
			std::cout << "Bye Bye~" << std::endl;
			break;
		}
		else
		{
			std::cout << "잘못된 명령어입니다." << std::endl;
		}

		if (std::cin.fail())
		{
			std::cout << "입력을 받는 도중 오류가 발생했습니다." << std::endl;
			break;
		}
	}
}
