
#include <iostream>
#include <string>

int main()
{
	int zahl;

	std::cout << "Gib eine positive Zahl ein: \n";
	std::cin >> zahl;

	while (zahl < 0)
	{
		std::cout << "Fehler! Goib eine positive Zahl ein: \n";
		std::cin >> zahl;
	}
	std::cout << "Danke! Deine zahl ist: " << zahl << "\n";

	return 0;
}
