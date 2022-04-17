/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 00:00:19 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:47:19 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
    : Form("Shrubbery_creation_form", 145, 137), target("Unknown_Target") {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : Form("Shrubbery_creation_form", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) {
    *this = ref;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref) {
    if (this != &ref) {
        this->target = ref.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const {
    this->Form::checkExecutable(bureaucrat);

    std::ofstream of;

    of.open(this->target + "__shrubbery");
    if (of.fail() == true) {
        throw FileOpeningFail();
    }
    of << "    oxoxoo    ooxoo\n";
    of << "  ooxoxo oo  oxoxooo\n";
    of << " oooo xxoxoo ooo ooox\n";
    of << " oxo o oxoxo  xoxxoxo\n";
    of << "  oxo xooxoooo o ooo\n";
    of << "    ooo\\oo\\  /o/o\n";
    of << "        \\  \\/ /\n";
    of << "         |   /\n";
    of << "         |  |\n";
    of << "         | D|\n";
    of << "         |  |\n";
    of << "         |  |\n";
    of << "  ______/____\\____" << std::endl;
    of.close();
}

const char *ShrubberyCreationForm::FileOpeningFail::what(void) const throw() {
    return "failed to open file.";
}