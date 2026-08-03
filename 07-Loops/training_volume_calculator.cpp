#include <iostream>
#include <string>


int main()
{
	std::string name;
	int saetze;
	int wiederholung;
	int insgesamt = 0;
	
	std::cout << "----------------------\n";
	std::cout << "TRAININGSVOLUMEN-RECHNER\n";
	std::cout << "-----------------------\n";

	std::cout << "Wie heisst du? ";
	std::getline(std::cin, name);

	std::cout << "Wie viele Saetze schaffst du? ";
	std::cin >> saetze;

	for (int i = 1; i <= saetze;i++)
	{
		std::cout << "Wie viele Wiederholungen in Satz " <<i << "\n";
		std::cin >> wiederholung;
		insgesamt += wiederholung;
	}
	
	std::cout << "-----------------------\n";
	std::cout << "		ERGEBNIS		   ";
	std::cout << "-----------------------\n";

	std::cout << "Name: " << name << "\n";
	std::cout << "Anzahl Saetze: " << saetze << "\n";
	std::cout << "Wiederholungen insgesamt: " << insgesamt << "\n";
}
