/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:11:51 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 01:35:36 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

int main(void) {
    Intern someRandomIntern;
    Form *rrf;
    Form *ppf;
    Form *scf;
    Bureaucrat bureaucrat("jayi", 1);

    rrf = someRandomIntern.makeForm("robotomy request", "Bender1");
    ppf = someRandomIntern.makeForm("presidential pardon", "Bender2");
    scf = someRandomIntern.makeForm("shrubbery creation", "Bender3");

    bureaucrat.signForm(*rrf);
    bureaucrat.signForm(*ppf);
    bureaucrat.signForm(*scf);

    bureaucrat.executeForm(*rrf);
    bureaucrat.executeForm(*ppf);
    bureaucrat.executeForm(*scf);
}