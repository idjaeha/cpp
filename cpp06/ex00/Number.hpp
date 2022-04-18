/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:09:31 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:09:42 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBER_H
#define NUMBER_H

class Number {
  private:
  public:
    Number(void);
    ~Number();
    Number &operator=(const Number &ref);
    Number(const Number &ref);
};

#endif