/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:29:05 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/06 12:45:16 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp" 

class PhoneBook {
	 private:
	 
	 	int 	count;
		Contact contacts[8];
		 
	 public:
		
		PhoneBook();
	 	void getMain();
		void addContact();
		~PhoneBook();
		
};

#endif