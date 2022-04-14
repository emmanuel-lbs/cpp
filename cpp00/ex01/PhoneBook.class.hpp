
#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include "Contact.class.hpp"

class PhoneBook {

	public:
		PhoneBook(void);
		~PhoneBook(void);
		int		index;
		Contact	contacts[8];
		Contact Add_contact(void);
		void	search_contact(void);
//		Exit(void);
	private:
};
#endif
