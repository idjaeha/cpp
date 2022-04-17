/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:58:58 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 01:34:03 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
    : Form("Presidential_pardon_form", 25, 5), target("Unknown_Target") {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : Form("Presidential_pardon_form", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &ref) {
    *this = ref;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &ref) {
    if (this != &ref) {
        this->target = ref.target;
    }
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const {
    this->Form::checkExecutable(bureaucrat);
    std::cout << this->target;
    std::cout << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}