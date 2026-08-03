#include <iostream>

int main()
{
	int alter;

	std::cout << "Wie alt bist du? ";
	std::cin >> alter;

	if (alter >= 18)
	{
		std::cout << "Du bist volljaehrig.\n";
	}
	else
	{
		std::cout << "Du bist minderjaehrig.\n";
	}
	return 0;

}
