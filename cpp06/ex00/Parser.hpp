/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parser.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:06:55 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:08:02 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
#define PARSER_H

class Parser {
  private:
  public:
    Parser(void);
    ~Parser();
    Parser &operator=(const Parser &ref);
    Parser(const Parser &ref);
};

#endif