/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 18:07:27 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 18:07:50 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

#define ASCII_TREE \
    "___██__________██\n"\
    "___█▒█________█▒█\n"\
    "__█▒███____███▒█\n"\
    "__█▒████████▒▒█\n"\
    "__█▒████▒▒█▒▒██\n"\
    "__████▒▒▒▒▒████\n"\
    "___█▒▒▒▒▒▒▒████\n"\
    "__█▒▒▒▒▒▒▒▒████______█\n"\
    "_██▒█▒▒▒▒▒█▒▒████__█▒█\n"\
    "_█▒█●█▒▒▒█●█▒▒███_█▒▒█\n"\
    "_█▒▒█▒▒▒▒▒█▒▒▒██_█▒▒█\n"\
    "__█▒▒▒=▲=▒▒▒▒███_██▒█\n"\
    "__██▒▒█♥█▒▒▒▒███__██▒█\n"\
    "____███▒▒▒▒████____█▒█\n"\
    "______██████________███\n"\
    "_______█▒▒████______██\n"\
    "_______█▒▒▒▒▒████__██\n"\
    "_______█▒██▒██████▒█\n"\
    "_______█▒███▒▒▒█████\n"\
    "_____█▒████▒▒▒▒████\n"\
    "______█▒███▒██████__\n"

ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm)
: Form("ShrubberyCreationForm", 145, 137), target(shrubberyCreationForm.target) {}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->getSigned()) {
		throw Form::NotSignedException("Form is not signed!");
	}
	if (executor.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException("Grade too low");
	}
	std::ofstream filestream(this->target + "_shrubbery");
	if (filestream.is_open()) {
		filestream << ASCII_TREE;
		filestream.close();
	} else {
		std::cerr << "Error: can't create file!" << endl;
	}
}