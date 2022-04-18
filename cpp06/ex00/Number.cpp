/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Number.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:09:31 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 22:53:25 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Number.hpp"

Number::Number(void) : info(NULL) {}
Number::Number(Info *info) : info(info) {}
Number::Number(const Number &ref) { *this = ref; }
Number &Number::operator=(const Number &ref) {
    if (this != &ref) {
        this->info = ref.info;
    }
    return *this;
}
