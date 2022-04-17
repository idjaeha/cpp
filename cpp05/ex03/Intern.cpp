/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 01:14:10 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 01:31:16 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}
Intern::~Intern() {}
Intern::Intern(const Intern &ref) { *this = ref; }
Intern &Intern::operator=(const Intern &ref) {
    if (this != &ref) {
    }
    return *this;
}
Form *Intern::makeForm(std::string formName, std::string target) {
    std::string flag[3] = {"robotomy request", "presidential pardon",
                           "shrubbery creation"};

    Form *form = NULL;
    int idx = 0;
    while (flag[idx] != formName && idx != 3)
        idx++;

    switch (idx) {
    case 0:
        form = new RobotomyRequestForm(target);
        break;
    case 1:
        form = new PresidentialPardonForm(target);
        break;
    case 2:
        form = new ShrubberyCreationForm(target);
        break;
    default:
        form = NULL;
    }

    if (form == NULL) {
        std::cout << "Invalid form name." << std::endl;
    } else {
        std::cout << "Intern creates " << form->getName() << std::endl;
    }
    return form;
}