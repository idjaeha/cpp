/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:06:55 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:53:38 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
#define PARSER_H

#include "Info.hpp"
#include <string>

class Parser {
  private:
    const std::string raw;

  public:
    Parser(void);
    Parser(std::string raw);
    ~Parser();
    Parser &operator=(const Parser &ref);
    Parser(const Parser &ref);
    Info *parse(void);

    class InvalidArgException : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };
};

#endif