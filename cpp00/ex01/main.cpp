
#include <iostream>
#include <iomanip>
#include <string>         // std::string
#include <locale>         // std::locale, std::isdigit
#include <sstream>
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	book;
	std::string input;

	while (1)
	{
		if (std::cin) {
			std::cout << "what do you want ?" <<std::endl;
			std::getline(std::cin, input);
		}
		if (input == "EXIT" || !std::cin)
			break;
		if (input == "ADD")
		{
			book.Add_contact();
		}
		if (input == "SEARCH")
			book.search_contact();
	}
	return (0);

}
