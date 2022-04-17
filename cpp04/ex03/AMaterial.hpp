/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMaterial.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:27:56 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 15:34:39 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

class AMateria {
  protected:
    std::string type;

  public:
    AMateria(std::string const &type);
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif