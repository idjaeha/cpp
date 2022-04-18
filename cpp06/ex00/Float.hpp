/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Float.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:13 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:10:22 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOAT_H
#define FLOAT_H

class Float {
  private:
  public:
    Float(void);
    ~Float();
    Float &operator=(const Float &ref);
    Float(const Float &ref);
};

#endif