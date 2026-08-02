#include <iostream>

int main()
{
	int zahl1;
	int zahl2;
	int summe;
	int differenz;
	int produkt;


	std::cout << "geben sie eine zahl ein: ";
	std::cin >> zahl1;

	std::cout << "geben sie ihre zweite Zahl ein: ";
	std::cin >> zahl2;

	summe = zahl1 + zahl2;
	differenz = zahl1 - zahl2;
	produkt = zahl1 * zahl2;

	std::cout << "die summe deiner beiden zahlen ist: " << summe << "\n";
	std::cout << "die differenz deiner beiden zahlen ist: " << differenz << "\n";
	std::cout << "das produkt deiner beiden zahlen ist: " << produkt << "\n";

	return 0; 


}

