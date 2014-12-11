#include <iostream>

int main() {
	std::cout << "plik pierwszy \n";
	int		stopy;					// do przechowywania danej wejsciowej
	double	metry;					// do wpisania wyniku
	double 	przelicznik = 0.3;		// przelicznik: stopy na metry

	std::cout << "Podaj wysokosc w stopach: ";
	std::cin >> stopy;				// przyjecie danej z klawiatury

	metry = stopy * przelicznik;	// przeliczenie

	std::cout << "\n";				// rownoznaczne z: std::cout << std endl;

	// wypisanie wynikow
	std::cout << stopy << " stop - to jest: " << metry << " metrow\n";
}
