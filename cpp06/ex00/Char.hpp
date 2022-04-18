/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Char.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:34 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:10:42 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAR_H
#define CHAR_H

class Char {
  private:
  public:
    Char(void);
    ~Char();
    Char &operator=(const Char &ref);
    Char(const Char &ref);
};

#endif