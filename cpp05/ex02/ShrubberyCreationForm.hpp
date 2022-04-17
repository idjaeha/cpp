/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 23:59:48 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 00:36:59 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCF_H
#define SCF_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
  private:
    std::string target;

  public:
    ShrubberyCreationForm(void);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm &ref);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);
    void execute(const Bureaucrat &bßureaucrat) const;

    class FileOpeningFail : public std::exception {
      public:
        virtual const char *what(void) const throw();
    };
};

#endif