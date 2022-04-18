/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 20:32:55 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:32:44 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Char.hpp"
#include "Double.hpp"
#include "Float.hpp"
#include "Info.hpp"
#include "Int.hpp"
#include "Parser.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "인자 개수는 1개여아합니다." << std::endl;
        return (1);
    }
    try {
        Parser parser(argv[1]);
        Info *info = parser.parse();

        Char _char(info);
        Int _int(info);
        Float _float(info);
        Double _double(info);

        _char.print();
        _int.print();
        _float.print();
        _double.print();

        delete info;
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
}