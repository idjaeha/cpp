/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:04:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/22 02:31:08 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
#define EASYFIND_H

#include <stack>

template <typename T> class MutantStack : public std::stack<T> {
  private:
  public:
    MutantStack(void) {}
    ~MutantStack() {}
    MutantStack(const MutantStack<T> &ref) : std::stack<T>(ref) {}
    MutantStack<T> &operator=(const MutantStack<T> &ref) {
        if (this != &ref) {
            this->c = ref.c;
        }
        return *this;
    }

    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin(void) { return this->c.begin(); };
    iterator end(void) { return this->c.end(); };
};
#endif