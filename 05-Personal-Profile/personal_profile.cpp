#include <iostream>
#include <string>

int main()
{
	std::string name;
  int alter;
	double groesse;
	std::string lieblingssportart;
	int alter10;

	std::cout << "geben sie Ihren Namen ein: ";
	std::cin >> name;

	std::cout << "geben sie ihren alter ein: ";
	std::cin >> alter;

	std::cout << "geben sie ihre groesse ein: ";
	std::cin >> groesse;

	std::cout << "geben sie ihren lieblingssportart ein: ";
	std::cin >> lieblingssportart;

	std::cout << "Dein Name ist: " << name << "\n";
	std::cout << "Du bist " << alter << " Jahre alt.\n";
	std::cout << "du bist " << groesse << " gross\n";
	std::cout << "Deine lieblingssportart ist " << lieblingssportart << "\n";

	alter10 = alter + 10;

	std::cout << "Du bist in 10 Jahre " << alter10 << " Jahre alt\n";
return 0;
}
