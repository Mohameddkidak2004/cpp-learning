
#include <iostream>
#include <string>

int main()
{
	std::string name;
	
	std::cout << "wie heisst du? ";
	std::getline(std::cin, name); //std:: cin >> variable liest normalerweise bis zum nächsten leerzeichen
								//std::getline() liest eine ganze zeile einschließlich leerzeichen
	
	std::cout << "Dein vollständiger Name ist: " << name;
	return 0;
}
