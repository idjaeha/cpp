/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 20:08:32 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:58:55 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat {
  private:
    const std::string name;
    int grade;

  public:
    Bureaucrat(void);
    Bureaucrat(std::string name, int grade);
    Bureaucrat(const Bureaucrat &ref);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &ref);

    std::string getName(void) const;
    int getGrade(void) const;
    void promote(void);
    void demote(void);
    void signForm(Form &form);
    void executeForm(Form const &form);

    class GradeTooHighException : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &ref);

#endif