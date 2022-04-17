/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMaterialSource.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:29:51 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 15:30:44 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIAL_SOURCE_H
#define IMATERIAL_SOURCE_H

#include "AMaterial.hpp"
#include <string>

class IMateriaSource {
  public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif