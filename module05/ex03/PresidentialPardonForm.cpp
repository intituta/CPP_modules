/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:07:16 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 18:07:17 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: Form("PresidentialPardonForm", 25, 5) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm)
: Form("PresidentialPardonForm", 25, 5), target(presidentialPardonForm.target) {}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!this->getSigned()) {
		throw Form::NotSignedException("Form is not signed!");
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException("Grade too low");
	}
	cout << this->target << " has been pardoned by Zaphod Beeblebrox." << endl;
}