#include <iostream>

int main()
{
	double gefahrene_kilometer;
	double benoetigte_stunde;
	double geschwindigkeit;

	std::cout << "geben sie ein wie viele kilometer sie schon gefahren sind: ";
	std::cin >> gefahrene_kilometer;

	std::cout << "Wie viele stunden haben die gebraucht: ";
	std::cin >> benoetigte_stunde;

	geschwindigkeit = gefahrene_kilometer / benoetigte_stunde;

	std::cout << "Deine durchschnittsgeschwindigkeit betreagt: " << geschwindigkeit;

	return 0;
}
