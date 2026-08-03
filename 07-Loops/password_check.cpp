# include <iostream>

int main()
{
	int richtiges_passwort = 1234;
	int eingabe;

	do
	{
		std::cout << " Geben sie ihren richtigen Passwort ein:";
		std::cin >> eingabe;

		if (eingabe != richtiges_passwort)
		{
			std::cout << "Falsches Passwort!\n";
		}
	} while (eingabe != richtiges_passwort);
	std::cout << "Zugang erlaubt!\n";
	return 0;
}
