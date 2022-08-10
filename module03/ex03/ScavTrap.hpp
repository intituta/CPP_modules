/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:20:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/10 17:57:08 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    private:
	    int scavEnergyPoints;
        
    public:

        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& scavTrap);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& scavTrap);

        void guardGate();
        void attack(const std::string& target);
        
        int getScavEnergyPoints();
};

#endif
