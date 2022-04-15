/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:56:06 by jayi              #+#    #+#             */
/*   Updated: 2022/04/15 18:07:22 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain {
  private:
    std::string ideas[100];

  public:
    Brain(void);
    ~Brain();
    Brain &operator=(const Brain &ref);
    Brain(const Brain &ref);
};

#endif