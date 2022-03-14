/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 08:50:28 by jayi              #+#    #+#             */
/*   Updated: 2022/03/14 08:55:29 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include "selector.hpp"

int	main(void)
{
	phonebook pb;
	selector sl;

	pb.add("1", "2", "3", "4", "12345678901");
	pb.search(0);
	sl.run(&pb);
}