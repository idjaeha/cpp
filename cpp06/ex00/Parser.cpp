/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:20:46 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 19:52:48 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parser.hpp"

Parser::Parser(void) : raw("") {}
Parser::Parser(std::string raw) : raw(raw) {}
Parser::~Parser() {}
Parser &Parser::operator=(const Parser &ref) {
    if (this != &ref) {
    }
    return *this;
}
Parser::Parser(const Parser &ref) { *this = ref; }
Info *Parser::parse(void) {
    Info *info = NULL;

    if (this->raw == "nan" || this->raw == "nanf") {
        info = new Info(false, false, "nan", 0, 0);
    } else if (this->raw == "-inff" || this->raw == "+inff" ||
               this->raw == "-inf" || this->raw == "+inf" ||
               this->raw == "inf" || this->raw == "inff") {
        info = new Info(this->raw[0] == '-', false, "inf", 0, 0);
    } else if (this->raw[0] == '\'') {
        if (this->raw[1] == '\0') {
            throw InvalidArgException();
        }
        if (this->raw[2] != '\'') {
            throw InvalidArgException();
        }

        info = new Info(false, false, "", raw[1], 0.0);
    } else {
        bool isMinus = (this->raw[0] == '-');
        bool existsPoint = false;
        std::string integerStr = "";
        std::string decimalStr = "0.";

        int idx = 0;
        if (this->raw[0] == '+' || this->raw[0] == '-') {
            idx++;
        }
        while ('0' <= this->raw[idx] && this->raw[idx] <= '9') {
            integerStr += this->raw[idx];
            idx++;
        }
        if (this->raw[idx] == '.') {
            existsPoint = true;
            idx++;
        }
        while ('0' <= this->raw[idx] && this->raw[idx] <= '9') {
            decimalStr += this->raw[idx];
            idx++;
        }
        if (this->raw[idx] == 'f') {
            idx++;
        }

        if (this->raw[idx] != '\0') {
            throw InvalidArgException();
        }
        if (integerStr == "") {
            throw InvalidArgException();
        }
        if (existsPoint == true && decimalStr == "0.") {
            throw InvalidArgException();
        }

        info = new Info(isMinus, existsPoint, "", atoll(integerStr.c_str()),
                        atof(decimalStr.c_str()));
    }
    return info;
}

const char *Parser::InvalidArgException::what(void) const throw() {
    return "유효하지 않은 인자입니다.";
}