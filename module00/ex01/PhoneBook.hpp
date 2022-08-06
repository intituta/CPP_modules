/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:29:05 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 17:49:01 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iomanip>
# include <iostream>
# include "Contact.hpp" 

class PhoneBook {
	
	 private:

		int		index;
	 	int 	count;
		Contact contacts[8];
		void viewContact();
		 
	 public:
		
		PhoneBook();
	 	void getMain();
		void addContact();
		void searchContact();
		~PhoneBook();
		
};

#endif