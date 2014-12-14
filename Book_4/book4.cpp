#include <iostream>

int main() //DLACZEGO TU JEST INT MAIN() A NIE SAMO MAIN()??
		   //W SUMIE TO WE WSZYSTKICH MIALEM INT MAIN A WCZESNIEJ SIE POMYLILEM
		   //I NIE NAPISALEM INT, W TAKIM RAZIE TO SIE POWINNO KOMPILOWAC?
{
	int wys, punkty_karne;			//definicja dwoch zmiennych typu int
									//obie sa tego samego typu wiec
									//wystarczy przecinek odzielajacy nazwy
	std::cout << "Na jakiej wysokosci lecimy? [w metrach]: ";
	std::cin >> wys;

	//-----------------rozwazmy sytuacje-----------------
	if(wys < 500)
	{
		std::cout << "\n" << wys << " metrow to za nisko!\n";
		punkty_karne = 1;
	}
	else
	{
		std::cout << "\nNa wysokosci " << wys << " metrow jestes juz bezpieczny \n";
		punkty_karne = 0;
	}
	//-----------------ocena twoich wynikow--------------
	std::cout << "Masz " << punkty_karne << " punktow karnych \n";
	if(punkty_karne) std::cout << "Popraw sie!";
}
