/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:19:56 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 23:19:49 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::getName(void) const { return this->name; }

bool Form::getIsSigned(void) const { return this->isSigned; }

int Form::getSignGrade(void) const { return this->signGrade; }

int Form::getExecuteGrade(void) const { return this->executeGrade; }

void Form::beSigned(const Bureaucrat &ref) {
    if (this->signGrade < ref.getGrade()) {
        throw Form::GradeTooLowException();
    }
    this->isSigned = true;
}

Form::Form(void)
    : name("Unknown"), isSigned(false), signGrade(150), executeGrade(150) {}

Form::Form(std::string name, int signGrade, int executeGrade)
    : name(name), isSigned(false), signGrade(signGrade),
      executeGrade(executeGrade) {
    if (this->signGrade < 1 || this->executeGrade < 1) {
        throw Form::GradeTooHighException();
    }

    if (this->signGrade > 150 || this->executeGrade > 150) {
        throw Form::GradeTooLowException();
    }
}

Form::Form(const Form &ref)
    : name("Unknown"), isSigned(false), signGrade(150), executeGrade(150) {
    *this = ref;
}

Form::~Form() {}

Form &Form::operator=(const Form &ref) {
    if (this != &ref) {
        this->isSigned = ref.getIsSigned();
    }
    return *this;
}

std::ostream &operator<<(std::ostream &os, const Form &ref) {
    os << ref.getName();
    os << ", form, is signed : ";
    os << (ref.getIsSigned() ? "true" : "false");
    os << ", sign grade : ";
    os << ref.getSignGrade();
    os << ", execute grade : ";
    os << ref.getExecuteGrade();
    os << std::endl;
    return os;
}

const char *Form::GradeTooHighException::what(void) const throw() {
    return "grade too high.";
}

const char *Form::GradeTooLowException::what(void) const throw() {
    return "grade too low.";
}