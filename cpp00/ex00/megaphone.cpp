#include <iostream>
#include <algorithm>

int	main(int ac, char **av)
{
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; av[i]; i++)
			str += av[i];
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		std::cout << str << std::endl;
	}
	return (0);
}
