
#include <iostream>
#include "Contact.class.hpp"

Contact::Contact(void) {

}

Contact::~Contact(void) {

}

void	Contact::set_first_name(std::string FirstName)
{
	this->_first_name = FirstName;
}

void	Contact::set_last_name(std::string LastName)
{
	this->_last_name = LastName;
}

void	Contact::set_nickname(std::string NickName)
{
	this->_nickname = NickName;
}

void	Contact::set_phone_number(std::string PhoneNumber)
{
	this->_phone_number = PhoneNumber;
}

void	Contact::set_darkest_secret(std::string DarkestSecrete)
{
	this->_darkest_secret = DarkestSecrete;
}

std::string	Contact::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Contact::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Contact::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Contact::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Contact::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}
