/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 21:11:51 by jayi              #+#    #+#             */
/*   Updated: 2022/04/21 18:31:20 by jayi             ###   ########.fr       */
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

    if (rrf != NULL)
        bureaucrat.signForm(*rrf);
    if (ppf != NULL)
        bureaucrat.signForm(*ppf);
    if (scf != NULL)
        bureaucrat.signForm(*scf);

    if (rrf != NULL)
        bureaucrat.executeForm(*rrf);
    if (ppf != NULL)
        bureaucrat.executeForm(*ppf);
    if (scf != NULL)
        bureaucrat.executeForm(*scf);
}