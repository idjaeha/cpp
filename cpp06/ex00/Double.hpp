/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:23 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:17:39 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_H
#define DOUBLE_H

#include "Number.hpp"

class Double : public Number {
  public:
    Double(void);
    Double(Info *info);
    ~Double();
    Double &operator=(const Double &ref);
    Double(const Double &ref);
    void print(void);
};

#endif