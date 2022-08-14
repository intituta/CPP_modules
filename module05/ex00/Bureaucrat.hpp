/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 09:16:20 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 09:16:22 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

using std::cout;
using std::endl;

class Bureaucrat {

public:
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(int grade);
	Bureaucrat(const Bureaucrat &bureaucrat);

	std::string getName() const;
	int getGrade() const;
	void increment();
	void decrement();

	class GradeTooHighException : public std::runtime_error {

	public:
		GradeTooHighException(const std::string &error) : std::runtime_error(error) {}
	};

	class GradeTooLowException : public std::runtime_error {

	public:
		GradeTooLowException(const std::string &error) : std::runtime_error(error) {}
	};

private:
	const std::string name;
	int grade;

	Bureaucrat &operator = (const Bureaucrat &bureaucrat);
};

std::ostream &operator << (std::ostream &os, const Bureaucrat &bureaucrat);

#endif
