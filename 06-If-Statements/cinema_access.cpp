#include <iostream>
#include <string>

int main()
{
	int alter;

	std::cout << "Wie alt bist du?\n";
	std::cin >> alter;

  if (alter < 12)
	{
		std::cout << "Alter " << alter << "\n";
		std::cout << "Unter 12: Kein Eintritt\n";
	}
	else if (alter >= 12 && alter <= 17)
	{
		std::cout << "Alter " << alter << "\n";
		std::cout << "Von 12 bis einschliesslich 17: Eintritt nur mit Begleitung";
	}
	else
	{
		std::cout << "Alter " << alter << "\n";
		std::cout << "ab 18: Eintritt erlaubt";
	}
  retrun 0;
}
