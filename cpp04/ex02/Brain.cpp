/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 17:56:08 by jayi              #+#    #+#             */
/*   Updated: 2022/04/17 14:44:15 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) { std::cout << "Create Brain !!!" << std::endl; }

Brain::~Brain() { std::cout << "Delete Brain !!!" << std::endl; }

Brain &Brain::operator=(const Brain &ref) {
    std::cout << "Brain copy assignment operator." << std::endl;
    if (this != &ref) {
        for (int idx = 0; idx < 100; idx++)
            this->ideas[idx] = ref.ideas[idx];
    }
    return *this;
}

Brain::Brain(const Brain &ref) {
    std::cout << "Brain copy constructor." << std::endl;
    for (int idx = 0; idx < 100; idx++)
        this->ideas[idx] = "";
    *this = ref;
}

void Brain::setIdea(int index, std::string idea) {
    if (!(0 <= index && index < 100))
        return;
    this->ideas[index] = idea;
}

void Brain::printIdea(int index) {
    if (!(0 <= index && index < 100))
        return;
    std::cout << "idea : " << this->ideas[index] << std::endl;
}