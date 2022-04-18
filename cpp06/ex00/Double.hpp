/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Double.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:23 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:10:32 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOUBLE_H
#define DOUBLE_H

class Double {
  private:
  public:
    Double(void);
    ~Double();
    Double &operator=(const Double &ref);
    Double(const Double &ref);
};

#endif