/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:04:00 by jayi              #+#    #+#             */
/*   Updated: 2022/04/25 18:34:10 by jayi             ###   ########.fr       */
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

    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    const_iterator cbegin(void) { return this->c.cbegin(); };
    const_iterator cend(void) { return this->c.cend(); };

    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    reverse_iterator rbegin(void) { return this->c.rbegin(); };
    reverse_iterator rend(void) { return this->c.rend(); };

    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
    const_reverse_iterator crbegin(void) { return this->c.crbegin(); };
    const_reverse_iterator crend(void) { return this->c.crend(); };
};
#endif