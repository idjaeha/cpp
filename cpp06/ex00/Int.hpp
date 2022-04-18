/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:09:47 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:18:25 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_H
#define INT_H

#include "Number.hpp"

class Int : public Number {
  public:
    Int(void);
    Int(Info *info);
    ~Int();
    Int &operator=(const Int &ref);
    Int(const Int &ref);
    void print(void);
};

#endif