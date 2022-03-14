/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:26 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 10:55:07 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "contact.hpp"

void contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string contact::getFirstName(void)
{
	return firstName;
}

std::string contact::getLastName(void)
{
	return lastName;
}

std::string contact::getNickName(void)
{
	return nickName;
}

std::string contact::getPhoneNumber(void)
{
	return phoneNumber;
}

std::string contact::getDarkestSecret(void)
{
	return darkestSecret;
}
