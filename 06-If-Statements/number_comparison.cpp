#include <iostream>

int main()
{
	int zahl1;
	int zahl2;

	std::cout << "Geben sie eine Zahl1 ein: \n";
	std::cin >> zahl1;

	std::cout << "Geben sie eine Zahl2 ein: \n";
	std::cin >> zahl2;

	if (zahl1 == zahl2)
	{
		std::cout << "Deine beiden Zahlen sind gleich gross!\n";
	}
	else if (zahl1 > zahl2)
	{
		std::cout << "Deine Zahl1 ist greosser als  deiner zweiten Zahl\n";
	}
	else
	{
		std::cout << "Deine Zahl1 ist kleiner als die zweite Zahl\n";
	}
  return 0;
}
