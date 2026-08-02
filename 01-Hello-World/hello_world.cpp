
#include <iostream> // #: Präprozessor (arbeitet bevor das eigentliche Programm kompiliert wird) 
					// include: einfügen und einbinden (Füge die benötigten Werkzeuge aus Iostream in mein Programm ein) 
					// iostream: ist ein header aus der C++ Standartbibliothek 

int main()			// main: Hauptfunktion 
					      //int: Ganze Zahl (die Funktion gibt am ende eine ganze Zahl zurück) 
{
	std::cout << "Hello World!\n";	//std: steht für die C++ Standartbibliothek 
	std::cout << "Ich lerne heute C++!\n"; //cout: "see-out"-> gib etwas auf dem Bildschrim aus
	std::cout << "mein Ziel ist es ein guter Programmierer zu Werden\n";
	std::cout << "Hallo ";
	std::cout << "Mohamed";
	std::cout << "!\n";
	return 0; // programm erfolgreich beendet (kann man auch weg lassen weil es auch automatisch da stehen würde) 
}
