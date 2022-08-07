/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:29:05 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 11:28:20 by kferterb         ###   ########.fr       */
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
		void numContact();
		void viewFullInfo(Contact contact);
		
	 public:		
		PhoneBook();
	 	void getMain();
		void addContact();
		void searchContact();
		~PhoneBook();		
};

#endif