/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:30:21 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 22:21:10 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
#define SPAN_H

#include <exception>
#include <iostream>
#include <vector>

class Span {
  private:
    unsigned int capacity;
    long long maxValue;
    long long minValue;
    std::vector<int> vec;

  public:
    Span(void);
    Span(unsigned int capacity);
    Span(const Span &ref);
    ~Span();
    Span &operator=(const Span &ref);

    void addNumber(int num);
    void initRandomNumbers(void);
    long long shortestSpan(void);
    long long longestSpan(void);

    class FullSpanException : public std::exception {
        virtual const char *what(void) const throw() { return "span is full."; }
    };

    class NotEnoughException : public std::exception {
        virtual const char *what(void) const throw() {
            return "not enough integer.";
        }
    };
};

#endif