/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 17:39:18 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/13 17:02:35 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB {
public:
    HumanB(std::string name);
    ~HumanB();
    void setWeapon(Weapon &weapon);
    void attack();

private:
    std::string name;
    Weapon *weapon;
};

#endif