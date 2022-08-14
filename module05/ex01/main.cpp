/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:16:25 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 09:18:27 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {

    Bureaucrat bureaucrat(3);

    Form form1(2, 1);
    Form form2(4, 1);

    cout << form1 << endl;
    cout << form2 << endl;

    bureaucrat.signForm(form1);
    bureaucrat.signForm(form2);

    cout << form1 << endl;
    cout << form2 << endl;

    try {

        Form form1(0, 1);
    } catch (std::exception &exception) {

        cout << "Error: " << exception.what() << endl;
    }
    
    try {
        
        Form form2(4, 151);
    } catch (std::exception &exception) {
        
        cout << "Error: " << exception.what() << endl;
    }

    return 0;
}
