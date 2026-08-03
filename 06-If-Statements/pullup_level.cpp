#include <iostream>
#include <string>

int main()
{
	int klimmzuege;
	std::string name;

	std::cout << "Wie heisst du?\n";
	std::cin >> name;

	std::cout << "Wie viele klimmzuege schaffst du?\n";
	std::cin >> klimmzuege;

	if (klimmzuege < 0)
	{
		std::cout << "Es gibt keine Negativen Klimmzuege\n";
	}

	else if (klimmzuege >= 0 && klimmzuege <= 4)
	{
		std::cout << "Du bist noch ein Anfaenger\n";
		std::cout << "Du schaffst " << klimmzuege << " klimmzuege";
	}
	else if (klimmzuege >= 5 && klimmzuege <= 9)
	{
		std::cout << "Du hast eine solide Grundlage\n";
		std::cout << "Du schaffst " << klimmzuege << " klimmzuege";
	}
	else if (klimmzuege >= 10 && klimmzuege <= 14)
	{
		std::cout << "Du bist echt gut dran\n";
		std::cout << "Du schaffst " << klimmzuege << " klimmzuege";
	}
	else if (klimmzuege >= 15 && klimmzuege <= 19)
	{
		std::cout << "Du bist echt seht gut dran\n";
	  std::cout << "Du schaffst " << klimmzuege << " klimmzuege";
	}
	else
	{
		std::cout << "Sehr Stark du bist wirklich stark\n";
		std::cout << "Du schaffst " << klimmzuege << " klimmzuege";
	}
	return 0;
}
