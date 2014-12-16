#include <iostream>

int main()
{
	std::cout	<< "Kapitanie, ktory podzespol spawdzic? \n"
				<< "nr 10 silnik \nnr 35 - Stery \nnr 28 - radar\n"
				<< "Podaj kapitanie numer ";
	int ktory;
	std::cin >> ktory;

	switch(ktory)
	{
	case 10:
		std::cout << "sprawdzamy silnik \n";
		break;

	case 28:
		std::cout << "sprawdzamy radar \n";
		break;

	case 35:
		std::cout << "sprawdzamy stery \n";
		break;

	default:
		std::cout << "Zazadales nr " << ktory << " - nie znam takiego! ";
		break;
	}
}
