/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:00:14 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:47:37 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
    : Form("Robotomy_request_form", 72, 45), target("Unknown_Target") {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : Form("Robotomy_request_form", 72, 45), target(target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &ref) {
    *this = ref;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &ref) {
    if (this != &ref) {
        this->target = ref.target;
    }
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const {
    this->Form::checkExecutable(bureaucrat);

    std::cout << "testing......" << std::endl;
    time_t t;
    srand(time(&t));
    if (rand() % 2) {
        std::cout << target << " was robotomized" << std::endl;
    } else {
        std::cout << target << " was not robotomized" << std::endl;
    }
}