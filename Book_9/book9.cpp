#include <iostream>

int main()
{
	int i = 7;
	while(1)			// <- petla nieskonczona!
	{
		std::cout << "Petla, i = " << i << "\n";
		i = i - 1;
		if(i < 5)
		{
			std::cout << "Przerywamy!";
			break;
		}
	}
}
