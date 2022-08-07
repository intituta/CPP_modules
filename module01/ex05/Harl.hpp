/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 20:45:24 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 20:46:16 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>

class Harl
{
public:

    Harl();
    ~Harl();
    void complain(std::string level);

private:
    void debug(void );
    void info(void );
    void warning(void );
    void error(void );
};

#endif