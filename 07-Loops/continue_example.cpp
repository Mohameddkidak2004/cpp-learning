#include <iostream>

int main()
{
	for (int i = 1; i <= 15; i++)
	{
		if (i == 7)
		{
			continue;
		}
		std::cout << i << "\n";
	}
}
