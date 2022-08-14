/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:55:14 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 17:55:17 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Bureaucrat;

using std::cout;
using std::endl;

class Form {

public:
	Form();
	virtual ~Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form &form);

	std::string getName() const;
	bool getSigned() const;
	int getGradeToSign() const;
	int getGradeToExecute() const;

	void beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const = 0;

	class GradeTooHighException : public std::runtime_error {

	public:
		GradeTooHighException(const std::string &error) : std::runtime_error(error) {}
	};

	class GradeTooLowException : public std::runtime_error {

	public:
		GradeTooLowException(const std::string &error) : std::runtime_error(error) {}
	};

	class NotSignedException : public std::runtime_error {

	public:
		NotSignedException(const std::string &error) : std::runtime_error(error) {}
	};

private:
	const std::string name;
	bool isSigned;
	const int gradeToSign;
	const int gradeToExecute;

	Form &operator = (const Form &form);
};

std::ostream &operator << (std::ostream &os, const Form &form);

#endif
