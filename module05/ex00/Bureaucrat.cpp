/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:16:15 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 09:16:18 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(1) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(int grade) : name("Bureaucrat") {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException("Grade too high");
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException("Grade too low");
	}
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
: name(bureaucrat.name), grade(bureaucrat.grade) {}

std::string Bureaucrat::getName() const {
	return this->name;
}

int Bureaucrat::getGrade() const {
	return this->grade;
}

void Bureaucrat::increment() {
	if (this->grade > 1) {
		this->grade--;
	} else {
		throw Bureaucrat::GradeTooHighException("Grade too high");
	}
}

void Bureaucrat::decrement() {
	if (this->grade < 150) {
		this->grade++;
	} else {
		throw Bureaucrat::GradeTooLowException("Grade too low");
	}
}

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat) {
	return os << bureaucrat.getName() << ", bureaucrat grade "
	<< bureaucrat.getGrade() << ".";
}