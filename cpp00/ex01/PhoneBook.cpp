
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {

	this->index = 0;
	this->max_contact = false;
}

PhoneBook::~PhoneBook(void) {

	std::cout << "PHONEBOOK EXPLOSION !!!!!" << std::endl;
}

void PhoneBook::set(const std::string tmp, int const index)
{
	switch (index) {
		case 0 :
			this->contacts[this->index].set_first_name(tmp);
			break ;
		case 1 :
			this->contacts[this->index].set_last_name(tmp);
			break ;
		case 2 :
			this->contacts[this->index].set_nickname(tmp);
			break ;
		case 3 :
			this->contacts[this->index].set_phone_number(tmp);
			break ;
		case 4 :
			this->contacts[this->index].set_darkest_secret(tmp);
	}
}


void	PhoneBook::Add_contact(void)
{
	std::string tmp[5] = { "first name", "last name", "nickname", "phone number", "secret"};

	std::cout << this->index + 1 <<  "   contact :" << std::endl;
	for (int i = 0; i < 5; ++i) 
	{
		std::cout << tmp[i] << " : ";
		std::getline(std::cin, tmp[i]);
		if (!std::cin)
			return ;
		set(tmp[i], i);
	}
	if (this->index >= 7) 
		this->index = 0;
	else 
		this->index++;
	if (this->max_contact != 8)
		this->max_contact++;

}

void	cout_col(const std::string str)
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

void	cout_contact(const Contact The_contact, const int i)
{
	std::cout << "contact n°" << i << " :" << std::endl;
	std::cout << The_contact.get_first_name() << std::endl;
	std::cout << The_contact.get_last_name() << std::endl;
	std::cout << The_contact.get_nickname() << std::endl;
	std::cout << The_contact.get_phone_number() << std::endl;
	std::cout << The_contact.get_darkest_secret() << std::endl;
}

void	cout_all_contact(const Contact contacts[8],const int max)
{
	int			i;

	i = 0;
	while (i < max)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		std::cout << std::setw(10) << contacts[i].get_first_name() << '|';
		std::cout << std::setw(10) << contacts[i].get_last_name() << '|';
		std::cout << std::setw(10) << contacts[i].get_nickname() << '|';
		std::cout << std::endl;
		i++;
	}
}

void	PhoneBook::search_contact(void) const
{
	std::string	tmp;
	int			i;
	char		*pEnd;

	i = 0;
	if (this->max_contact == 0)
		std::cout << "no contact" << std::endl;
	else {
		cout_all_contact(this->contacts, this->max_contact);
		while (1) {
			std::cout << "what contact do you want :" << std::endl;
			std::getline(std::cin, tmp);
			if (!std::cin)
				return;
			i = std::strtol(tmp.c_str(), &pEnd, 10);
			std::cout << i << std::endl;
			if (i <= 0 || i > this->max_contact || i != std::strtol(tmp.c_str(), &pEnd, 10))
				std::cout << "contact innexistanct" << std::endl;
			else
				break;
		}
		cout_contact(this->contacts[i - 1], i);
	}
}
