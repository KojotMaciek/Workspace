#include <iostream>

int main()
{
	int i, m;
	int zakoncz = 3;
	for(i = 0; i < 4; i = i + 1)
	{
		for(m = 0; m < 10; m = m + 1)
		{
			std::cout << "*";
			if(m > zakoncz)break;		//tu wyskocz z for(m...)
		}
		std::cout << "\nKontynuujemy zewnetrzne petle" << " for dla i = " << i << "\n";
	}
}
