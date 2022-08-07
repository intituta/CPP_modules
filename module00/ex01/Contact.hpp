/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kferterb <kferterb@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 19:28:41 by kferterb          #+#    #+#             */
/*   Updated: 2022/08/07 11:26:33 by kferterb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
    private:
		std::string name;
		std::string lastname;
		std::string nickname;
		std::string phoneNumber;
		std::string darkSecret;
	public:
		Contact();
	
		void addContact();
		bool isEmptyField();
		
		std::string getName();
		std::string getLastname();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkSecret();
		
		void setName(std::string data);
		void setLastname(std::string data);
		void setNickname(std::string data);
		void setPhoneNumber(std::string data);
		void setDarkSecret(std::string data);
		
		~Contact();	
};

#endif