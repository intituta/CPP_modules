/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:38:08 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/13 17:02:39 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void attack();

private:
    std::string name;
    Weapon &weapon;
};
#endif