/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:13 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:17:41 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_H
#define FLOAT_H

#include "Number.hpp"
class Float : public Number {
  public:
    Float(void);
    Float(Info *info);
    ~Float();
    Float &operator=(const Float &ref);
    Float(const Float &ref);
    void print(void);
};

#endif