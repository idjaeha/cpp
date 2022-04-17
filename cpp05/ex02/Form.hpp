/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:19:57 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:36:52 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"
#include <string>

class Bureaucrat;

class Form {
  private:
    const std::string name;
    bool isSigned;
    const int signGrade;
    const int executeGrade;

  public:
    Form(void);
    Form(std::string name, int signGrade, int executeGrade);
    virtual ~Form();
    Form &operator=(const Form &ref);
    Form(const Form &ref);

    std::string getName(void) const;
    bool getIsSigned(void) const;
    int getSignGrade(void) const;
    int getExecuteGrade(void) const;
    void beSigned(const Bureaucrat &ref);
    void checkExecutable(const Bureaucrat &ref) const;
    virtual void execute(const Bureaucrat &bureaucrat) const = 0;

    class GradeTooHighException : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };

    class GradeTooLowException : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };

    class NotSignedException : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };
};

std::ostream &operator<<(std::ostream &os, const Form &ref);

#endif