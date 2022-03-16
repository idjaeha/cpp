/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 15:16:58 by jayi              #+#    #+#             */
/*   Updated: 2022/03/16 15:16:39 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

class megaphone
{
public:
	static void speak(unsigned int count, char **inputs);
};

void megaphone::speak(unsigned int count, char **inputs)
{
	std::string output("");
	std::string temp("");

	if (count == 0)
	{
		output += "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	}
	else
	{
		for (unsigned int idx = 1; idx <= count; idx++)
		{
			temp = inputs[idx];
			output += temp;
		}
	}

	for (unsigned int idx = 0; idx < output.length(); idx++)
	{
		output[idx] = toupper(output[idx]);
	}

	std::cout << output << std::endl;
}

int main(int argc, char **argv)
{
	megaphone::speak(argc - 1, argv);
}
