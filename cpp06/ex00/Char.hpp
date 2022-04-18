/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:34 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:17:35 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
#define CHAR_H

#include "Number.hpp"

class Char : public Number {
  public:
    Char(void);
    Char(Info *info);
    ~Char();
    Char &operator=(const Char &ref);
    Char(const Char &ref);
    void print(void);
};

#endif