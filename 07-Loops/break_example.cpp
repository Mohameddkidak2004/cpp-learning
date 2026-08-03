#include <iostream>

int main()
{
	for (int i = 1; i <= 100; i++)
	{
		std::cout << i << "\n";

		if (i >= 7)
		{
			break;
		}
  }
	std::cout << "Schleife beednet!\n";
  return 0;
}
