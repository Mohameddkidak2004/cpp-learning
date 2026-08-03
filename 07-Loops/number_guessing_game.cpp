#include <iostream>

int main()
{
	int geheimezahl = 7;
	int zahl;

	std::cout << "--------------------------\n";
	std::cout << "      ZAHLENRATESPIEL       ";
	std::cout << "--------------------------\n";

	std::cout << " Rate die Zahl zwischen 1 und 10: ";
	std::cin >> zahl;

	while (geheimezahl != zahl)
	{
		if (geheimezahl > zahl)
		{
			std::cout << "Zu Klein!\n ";
			std::cout << "Rate erneut: ";
			std::cin >> zahl;
		}
		else if (geheimezahl < zahl)
		{
			std::cout << "Zu Gross!\n ";
			std::cout << "Rate erneut: ";
			std::cin >> zahl;
		}
	}
	std::cout << "Richtig! Du hast gewonnen!\n";

	return 0; 
}
