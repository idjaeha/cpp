/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 01:14:26 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 01:18:58 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_H
#define DATA_H

#include <iostream>

class Data {
  private:
    int something;

  public:
    Data(void);
    Data(int something);
    ~Data();
    Data(const Data &ref);
    Data &operator=(const Data &ref);
    void print(void);
};

#endif