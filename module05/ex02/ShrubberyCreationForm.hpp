/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 17:55:47 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/14 17:55:48 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include <fstream>

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

public:
	ShrubberyCreationForm();
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(const ShrubberyCreationForm &shrubberyCreationForm);

	void execute(Bureaucrat const & executor) const;

private:
	std::string target;

	ShrubberyCreationForm &operator = (const ShrubberyCreationForm &shrubberyCreationForm);
};

#endif
