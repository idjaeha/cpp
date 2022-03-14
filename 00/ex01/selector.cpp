/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selector.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:21:37 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 08:58:29 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "selector.hpp"
#include <iostream>
#include <string>

void selector::run(phonebook *pb) {
	std::string command;
	unsigned int index;

	while (true)
	{
		std::cout << "----------------------------------------------" << std::endl;
		std::cout << "아래 명렁어 중 하나를 입력해주세요." << std::endl;
		std::cout << "- ADD" << std::endl;
		std::cout << "- SEARCH" << std::endl;
		std::cout << "- EXIT" << std::endl;
		std::cout << "----------------------------------------------" << std::endl;
		std::cout << ">> ";
		std::cin >> command;

		if (command.compare(COMMAND_ADD) == 0)
		{
			std::string firstName;
			std::string lastName;
			std::string nickName;
			std::string phoneNumber;
			std::string darkestSecret;

			std::cout << "firstName을 입력해주세요. >> ";
			std::cin >> firstName;
			std::cout << "lastName을 입력해주세요. >> ";
			std::cin >> lastName;
			std::cout << "nickName을 입력해주세요. >> ";
			std::cin >> nickName;
			std::cout << "phoneNumber을 입력해주세요. >> ";
			std::cin >> phoneNumber;
			std::cout << "darkestSecret을 입력해주세요. >> ";
			std::cin >> darkestSecret;

			pb->add(firstName, lastName, nickName, phoneNumber, darkestSecret);
		}
		else if (command.compare(COMMAND_SEARCH) == 0)
		{
			std::cout << "원하는 인덱스를 입력해주세요. >> ";
			std::cin >> index;
			
			pb->search(index);
		}
		else if (command.compare(COMMAND_EXIT) == 0)
		{
			std::cout << "EXIT를 입력하셨습니다." << std::endl;
			break;
		}
		else
		{
			std::cout << "잘못된 명령어입니다." << std::endl;
			break;
		}
	}
}
