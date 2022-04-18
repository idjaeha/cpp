/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:09:31 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:32:33 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_H
#define NUMBER_H

#include "Info.hpp"
#include <iostream>

class Number {
  protected:
    Info *info;

  public:
    Number(void);
    Number(Info *info);
    Number(const Number &ref);
    Number &operator=(const Number &ref);

    virtual ~Number(){};
    virtual void print(void) = 0;
};

#endif