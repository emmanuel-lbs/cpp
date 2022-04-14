
#include <iostream>
#include <iomanip>
#include <string>         // std::string
#include <locale>         // std::locale, std::isdigit
#include <sstream>
#include "PhoneBook.class.hpp"

int main(int ac, char **av)
{
	PhoneBook	book;
	std::string input;

	book.index = 0;
	while (1)
	{
		std::cout << "what do you want ?" <<std::endl;
		std::getline(std::cin, input);
		if (input == "EXIT")
			break;
		if (input == "ADD")
		{
			book.contacts[book.index] = book.Add_contact();
			if (book.index < 8)
				book.index++;
		}
		if (input == "SEARCH")
		{
			book.search_contact();
		}
	}
	return (0);

}
