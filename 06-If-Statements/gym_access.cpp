#include <iostream>
#include <string>

int main()
{
	std::string name;
	int alter;
	int mitgliedschaft;

	std::cout << "Wie heisst du?\n";
	std::getline(std::cin, name);
	
	std::cout << "Wie alt bist du?\n";
	std::cin >> alter;

	std::cout << "Hast du eine Mitgliedschaft? antworte mit Ja = 1 oder Nein = 0\n";
	std::cin >> mitgliedschaft;

	if (alter < 16)
	{
		std::cout << "-------------------------\n";
		std::cout << "FITNESSSTUDIO CHECK\n";
		std::cout << "-------------------------\n";
		std::cout << "Name: " << name << "\n";
		std::cout << "Alter:" << alter << "\n";
		if (mitgliedschaft == 1)
		{
			std::cout << "Kein zugang du bist zu jung\n";
		}
		else if (mitgliedschaft == 0)
		{
			std::cout << "Du bist leider noch kein Mitglied und zu jung!\n";
	  }
		std::cout << "vielleicht bist zum naechsten mal\n";
	}
	else if (alter >= 16)
	{
		std::cout << "-------------------------\n";
		std::cout << "FITNESSSTUDIO CHECK\n";
		std::cout << "-------------------------\n";
		std::cout << "Name: " << name << "\n";
		std::cout << "Alter:" << alter << "\n";
		if (mitgliedschaft == 1)
		{
			std::cout << "Zugang erlaubt\n";
			std::cout << "viel spass beim Training\n";
		}
		else if (mitgliedschaft == 0)
		{
			std::cout << "Du bist leider noch kein Mitglied!\n";
			std::cout << " Du benötigst eine Tageskarte\n";
			std::cout << "Zugang nicht gewehrt!\n";
		}
	}
return 0;
}
