/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Int.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:09:47 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:09:59 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INT_H
#define INT_H

class Int {
  private:
  public:
    Int(void);
    ~Int();
    Int &operator=(const Int &ref);
    Int(const Int &ref);
};

#endif