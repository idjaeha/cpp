/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:33:10 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 01:07:02 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name("Unknown") { this->grade = 150; }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
    if (grade < 1) {
        throw GradeTooHighException();
    }
    if (grade > 150) {
        throw GradeTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &ref) { *this = ref; }

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &ref) {
    if (this != &ref) {
        this->grade = ref.grade;
    }
    return *this;
}

std::string Bureaucrat::getName(void) const { return this->name; }

int Bureaucrat::getGrade(void) const { return this->grade; }

void Bureaucrat::promote(void) {
    if (this->grade <= 1) {
        throw GradeTooHighException();
    }
    this->grade--;
}

void Bureaucrat::demote(void) {
    if (this->grade >= 150) {
        throw GradeTooLowException();
    }
    this->grade++;
}

void Bureaucrat::signForm(Form &form) {
    try {
        form.beSigned(*this);
        std::cout << this->name;
        std::cout << " signed ";
        std::cout << form.getName() << std::endl;
    } catch (Form::GradeTooLowException e) {
        std::cout << this->name;
        std::cout << " couldn't signed ";
        std::cout << form.getName();
        std::cout << " because \"";
        std::cout << e.what();
        std::cout << "\"" << std::endl;
    }
}

void Bureaucrat::executeForm(Form const &form) {
    try {
        form.execute(*this);
        std::cout << this->name;
        std::cout << " executed ";
        std::cout << form.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->name;
        std::cout << " couldn't executed ";
        std::cout << form.getName();
        std::cout << " because \"";
        std::cerr << e.what() << "\"" << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref) {
    os << ref.getName();
    os << ", bureaucrat grade ";
    os << ref.getGrade();
    os << ".";
    return os;
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw() {
    return "grade too high.";
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw() {
    return "grade too low.";
}