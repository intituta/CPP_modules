/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 19:04:42 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/09 19:05:23 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    
    protected:

        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;

    public:
        
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& clapTrap);
        ~ClapTrap();

        ClapTrap& operator = (const ClapTrap& clapTrap);

        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
