
#include <iostream>
#include <iomanip>
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) {

	std::cout << "contruction" << std::endl;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "destruction" << std::endl;
}

int		set_contact( void (*set)(std::string))
{
	std::string tmp;

//	std::cout << output << std::endl;
	std::getline(std::cin, tmp);
	if (!std::cin)
		return (-1);
	set(tmp);
	return (0);
}

Contact PhoneBook::Add_contact(void)
{
	Contact		contact;
	std::string	tmp;

	std::cout << this->index + 1 <<  "   contact :" << std::endl;

	set_contact( contact.set_first_name);
	std::cout << contact.get_first_name() << std::endl;
//	std::cout << "First name :";
//	std::getline(std::cin, tmp);
//	if (!std::cin)
//		return (-1);
//	contact.set_first_name(tmp);

	std::cout << "Last name :";
	std::getline(std::cin, tmp);
	if (!std::cin)
		return (-1);
	contact.set_last_name(tmp);

	std::cout << "nickname :";
	std::getline(std::cin, tmp);
	if (!std::cin)
		return (-1);
	contact.set_nickname(tmp);

	std::cout << "phone number :";
	std::getline(std::cin, tmp);
	if (!std::cin)
		return (-1);
	contact.set_phone_number(tmp);

	std::cout << "HIS DARKEST SECRET :";
	std::getline(std::cin, tmp);
	if (!std::cin)
		return (-1);
	contact.set_darkest_secret(tmp);

	return (contact);
}

void	cout_col(std::string str)
{
	int			j;

	j = 0;
	while (j < 9 && str[j] != 0) {
		std::cout << str[j];
		j++;
	}
	if (j == 9)
		std::cout << '.';
	j = 10;
	if (j - str.size() > 0)
		std::cout << ' ' << std::setw (j - str.size());
	std::cout	<<  '|';

}

void	cout_contact(Contact The_contact, int i)
{
	std::cout << "contact n°" << i << " :" << std::endl;
	std::cout << The_contact.get_first_name() << std::endl;
	std::cout << The_contact.get_last_name() << std::endl;
	std::cout << The_contact.get_nickname() << std::endl;
	std::cout << The_contact.get_phone_number() << std::endl;
	std::cout << The_contact.get_darkest_secret() << std::endl;
}

void	cout_all_contact(int index, Contact contacts[8])
{
	int			i;
	std::string	tmp;

	i = 0;
	while (i < index)
	{
		std::cout << i + 1 << std::setw(10)   << '|';
		std::cout << std::setw(10) << contacts[i].get_first_name() << '|';
		std::cout << std::setw(10) << contacts[i].get_last_name() << '|';
		std::cout << std::setw(10) << contacts[i].get_nickname() << '|';
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::search_contact(void)
{
	std::string	tmp;
	int			i;
	char		*pEnd;

	i = 0;
	if (this->index == 0)
		std::cout << "no contact" << std::endl;
	else {
		cout_all_contact(this->index, this->contacts);
		while (1) {
			std::cout << "what contact do you want :" << std::endl;
			std::getline(std::cin, tmp);
			if (!std::cin)
				return;
			i = std::strtol(tmp.c_str(), &pEnd, 2);
			std::cout << i << std::endl;
			if (i <= 0 || i > this->index || i != std::strtol(tmp.c_str(), &pEnd, 10))
				std::cout << "contact innexistanct" << std::endl;
			else
				break;
		}
		cout_contact(this->contacts[i - 1], i);
	}
}
