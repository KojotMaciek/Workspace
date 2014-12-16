#include <iostream>

int main()
{
	std::cout << "Stewardzie, ilu leci pasazerow ? ";

	int ile;			//liczba pasazerow
	std::cin >> ile;

	//int i;				//licznik obiegow petli
	//for(i = 1; i <= ile; i = i + 1)
	for(int i = 1; i <= ile; i = i + 1) //definicja obiekty i w instrukcji
	{
		std::cout << "Pasazer nr " << i << " prosze zapisac pasy! \n";
	}
	std::cout << "Skoro wszyscy juz zapieli, to ladujemy.";
}
