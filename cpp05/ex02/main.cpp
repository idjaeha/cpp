/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:11:51 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 01:05:41 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
    {
        std::cout << "\n일반적인 상황," << std::endl;
        Bureaucrat bureaucrat("jayi", 1);

        PresidentialPardonForm ppf("ppf");
        RobotomyRequestForm rrf("rrf");
        ShrubberyCreationForm scf("scf");

        bureaucrat.signForm(ppf);
        bureaucrat.signForm(rrf);
        bureaucrat.signForm(scf);

        bureaucrat.executeForm(ppf);
        bureaucrat.executeForm(rrf);
        bureaucrat.executeForm(scf);
    }

    {
        std::cout << "\nsign이 안되는 상황" << std::endl;
        Bureaucrat bureaucrat;

        PresidentialPardonForm ppf("ppf");
        RobotomyRequestForm rrf("rrf");
        ShrubberyCreationForm scf("scf");

        bureaucrat.signForm(ppf);
        bureaucrat.signForm(rrf);
        bureaucrat.signForm(scf);

        bureaucrat.executeForm(ppf);
        bureaucrat.executeForm(rrf);
        bureaucrat.executeForm(scf);
    }

    {
        std::cout << "\ngrade가 46인 경우" << std::endl;
        Bureaucrat bureaucrat("jayi2", 46);

        PresidentialPardonForm ppf("ppf");
        RobotomyRequestForm rrf("rrf");
        ShrubberyCreationForm scf("scf");

        bureaucrat.signForm(ppf);
        bureaucrat.signForm(rrf);
        bureaucrat.signForm(scf);

        bureaucrat.executeForm(ppf);
        bureaucrat.executeForm(rrf);
        bureaucrat.executeForm(scf);
    }
}