#include <iostream>

int main()
{
	int zahl1;
	int zahl2;
	int ergebnis;

	std::cout << "geben sie die erste Zahl hier ein: ";
	std::cin >> zahl1;

	std::cout << "geben sie ihere zweite Zahl hier ein: ";
	std::cin >> zahl2;

	ergebnis = zahl1 + zahl2;
	std::cout << "Das Ergebnis ist: " << ergebnis <<"\n";

	return 0;

}
