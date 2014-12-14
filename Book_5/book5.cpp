#include <iostream>

int main()
{
	int ile;

	std::cout << "ile gwiazdek ma miec kapitan?: ";
	std::cin >> ile;

	//petla while rysujaca gwiazdki
	while(ile)
	{
		std::cout << "*";
		ile = ile - 1;
	}
	//na dowod, ze mial prawo przerwac petle
	std::cout << "\n Teraz zmienna ile ma wartosc " << ile;
}
