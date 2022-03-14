/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selector.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:21:37 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 08:35:43 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "selector.hpp"
#include <iostream>
#include <string>

void selector::run() {
	std::string command;

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
			std::cout << "ADD를 입력하셨습니다." << std::endl;
		else if (command.compare(COMMAND_SEARCH) == 0)
			std::cout << "SEARCH를 입력하셨습니다." << std::endl;
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
