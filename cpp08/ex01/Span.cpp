/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 21:40:45 by jayi              #+#    #+#             */
/*   Updated: 2022/04/25 19:11:31 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void ft_sort(std::vector<int>::iterator begin, std::vector<int>::iterator end) {
    int l = 0, r = (end - begin) - 1;
    if (l >= r)
        return;
    int mid = begin[(l + r) / 2];
    while (l <= r) {
        while (begin[l] < mid)
            ++l;
        while (mid < begin[r])
            --r;
        if (l <= r) {
            int temp = begin[l];
            begin[l] = begin[r];
            begin[r] = temp;
            l++;
            r--;
        }
    }
    ft_sort(begin, begin + l);
    ft_sort(begin + l, end);
}

Span::Span(void) : capacity(0), maxValue(INT32_MIN), minValue(INT32_MAX) {}

Span::Span(unsigned int capacity)
    : capacity(capacity), maxValue(INT32_MIN), minValue(INT32_MAX) {}

Span::Span(const Span &ref) { *this = ref; }

Span::~Span() {}

Span &Span::operator=(const Span &ref) {
    if (this != &ref) {
        this->vec = ref.vec;
        this->capacity = ref.capacity;
    }
    return *this;
}

void Span::addNumber(int num) {
    if (this->vec.size() >= this->capacity) {
        throw FullSpanException();
    }
    if (num > this->maxValue)
        this->maxValue = num;
    if (num < this->minValue)
        this->minValue = num;
    this->vec.push_back(num);
}

void Span::initRandomNumbers(void) {
    if (this->capacity <= 1)
        throw NotEnoughException();
    srand(time(NULL));
    std::vector<int> tmp(this->capacity);
    for (std::vector<int>::iterator iter = tmp.begin(); iter != tmp.end();
         iter++) {
        *iter = rand();
    }

    ft_sort(tmp.begin(), tmp.end());

    this->vec = tmp;
    this->minValue = *tmp.begin();
    this->maxValue = *(tmp.end() - 1);
}

long long Span::shortestSpan(void) {
    if (this->vec.size() <= 1) {
        throw NotEnoughException();
    }
    long long minSpan = (long long)INT32_MAX - (long long)INT32_MIN;

    ft_sort(this->vec.begin(), this->vec.end());

    for (std::vector<int>::iterator iter = this->vec.begin();
         iter != this->vec.end() - 1; iter++) {
        long long span = *(iter + 1) - (long long)*(iter);

        if (span < minSpan) {
            minSpan = span;
        }
    }

    return minSpan;
}

long long Span::longestSpan(void) {
    if (this->vec.size() <= 1) {
        throw NotEnoughException();
    }
    return this->maxValue - this->minValue;
}
