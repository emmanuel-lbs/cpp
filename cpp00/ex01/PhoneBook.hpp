
#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {

	public :
		PhoneBook(void);
		~PhoneBook(void);
		void	Add_contact(void);
		void	search_contact(void) const ;
		void set(std::string const tmp, int const index);

	private :
		int		max_contact;
		int		index;
		Contact	contacts[8];
};
#endif
