/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:59:01 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:32:41 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PPF_H
#define PPF_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {
  private:
    std::string target;

  public:
    PresidentialPardonForm(void);
    ~PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm &ref);
    PresidentialPardonForm &operator=(const PresidentialPardonForm &ref);
    void execute(const Bureaucrat &bureaucrat) const;
};

#endif