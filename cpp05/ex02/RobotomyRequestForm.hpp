/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:59:37 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:32:44 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RRF_H
#define RRF_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {
  private:
    std::string target;

  public:
    RobotomyRequestForm(void);
    ~RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm &ref);
    RobotomyRequestForm &operator=(const RobotomyRequestForm &ref);
    void execute(const Bureaucrat &bureaucrat) const;
};

#endif