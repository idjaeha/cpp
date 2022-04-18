/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 02:23:58 by jayi              #+#    #+#             */
/*   Updated: 2022/04/19 02:55:29 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

template <typename T> class Array {
  private:
    T *_arr;
    unsigned int _size;

  public:
    Array(void) : _arr(NULL), _size(0) {}

    ~Array() { delete[] this->_arr; }

    Array(unsigned int n) : _arr(new T[n]), _size(n) {}

    Array(const Array<T> &ref) : _arr(NULL), _size(0) { *this = ref; }

    Array<T> &operator=(const Array<T> &ref) {
        if (this != &ref) {
            if (this->_size > 0)
                delete[] this->_arr;
            this->_arr = new T[ref._size];
            this->_size = ref._size;
            for (unsigned int idx = 0; idx < ref._size; idx++) {
                this->_arr[idx] = ref._arr[idx];
            }
        }
        return *this;
    }

    T &operator[](const int n) {
        if (n < 0 || n >= (int)_size)
            throw InvalidIndexException();
        return _arr[n];
    }

    unsigned int size(void) { return (this->_size); }

    class InvalidIndexException : public std::exception {
      public:
        virtual const char *what(void) const throw() {
            return "can't access invalid index.";
        }
    };
};

#endif