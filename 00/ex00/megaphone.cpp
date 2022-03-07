/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:16:58 by jayi              #+#    #+#             */
/*   Updated: 2022/03/07 15:41:54 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Megaphone
{
public:
	static void speak(int count, char **inputs);
};

void Megaphone::speak(int count, char **inputs)
{
	std::string output("");
	std::string temp("");

	if (count == 0)
	{
		output += "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (int idx = 1; idx <= count; idx++)
		{
			temp = inputs[idx];
			output += temp;
		}
	}

	std::cout << output << std::endl;
}

int main(int argc, char **argv)
{
	Megaphone::speak(argc - 1, argv);
}
