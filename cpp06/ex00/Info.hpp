/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Info.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jayi <jayi@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 21:10:01 by jayi              #+#    #+#             */
/*   Updated: 2022/04/18 21:10:10 by jayi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INFO_H
#define INFO_H

class Info {
  private:
  public:
    Info(void);
    ~Info();
    Info &operator=(const Info &ref);
    Info(const Info &ref);
};

#endif