/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:55:20 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 17:55:21 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	Bureaucrat bureaucrat1(5);
	Bureaucrat bureaucrat2(45);
	Bureaucrat bureaucrat3(137);

	ShrubberyCreationForm shrubberyCreationForm("TARGET 1");
	RobotomyRequestForm robotomyRequestForm("TARGET 2");
	PresidentialPardonForm presidentialPardonForm("TARGET 3");

	bureaucrat1.executeForm(shrubberyCreationForm);
	bureaucrat1.executeForm(robotomyRequestForm);
	bureaucrat1.executeForm(presidentialPardonForm);

	cout << endl;

	bureaucrat3.signForm(shrubberyCreationForm);
	bureaucrat3.signForm(robotomyRequestForm);
	bureaucrat3.signForm(presidentialPardonForm);

	cout << endl;

	bureaucrat2.signForm(shrubberyCreationForm);
	bureaucrat2.signForm(robotomyRequestForm);
	bureaucrat2.signForm(presidentialPardonForm);

	cout << endl;

	bureaucrat1.signForm(shrubberyCreationForm);
	bureaucrat1.signForm(robotomyRequestForm);
	bureaucrat1.signForm(presidentialPardonForm);

	cout << endl;

	bureaucrat3.executeForm(shrubberyCreationForm);
	bureaucrat3.executeForm(robotomyRequestForm);
	bureaucrat3.executeForm(presidentialPardonForm);

	cout << endl;

	bureaucrat2.executeForm(shrubberyCreationForm);
	bureaucrat2.executeForm(robotomyRequestForm);
	bureaucrat2.executeForm(presidentialPardonForm);

	cout << endl;

	bureaucrat1.executeForm(shrubberyCreationForm);
	bureaucrat1.executeForm(robotomyRequestForm);
	bureaucrat1.executeForm(presidentialPardonForm);
}