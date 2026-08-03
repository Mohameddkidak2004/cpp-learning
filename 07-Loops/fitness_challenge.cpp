#include <iostream>

int main()
{
	int teilnehmer;
	int liegestuetze;
	int gesamt = 0;
	int best_liegestuetze = 0;

	std::cout << "--------------------------\n";
	std::cout << "FITNESS-CHALLENGE\n";
	std::cout << "--------------------------\n";

	std::cout << "Wie viele Teilnehmer gibt es? ";
	std::cin >> teilnehmer;

	for (int i = 1; i <= teilnehmer;i++)
	{
		std::cout << "Teilnehmer " << i << "\n";
		std::cout << "Wie viele Liegestuetze? ";
		std::cin >> liegestuetze;
		if (best_liegestuetze <= liegestuetze)
		{
			best_liegestuetze = liegestuetze;
		}
		gesamt += liegestuetze;
	}
	int durchschnitt = gesamt / teilnehmer;
	std::cout << "Teilnehmer insgesamt: " << teilnehmer << "\n";
	std::cout << "Liegestuetze insgesamt: " << gesamt << "\n";
	std::cout << "Durchschnitt: " << durchschnitt << "\n";
	std::cout << "meisten liegestuetze: " << best_liegestuetze << "\n";
}
