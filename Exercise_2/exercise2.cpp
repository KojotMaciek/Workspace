#include <iostream>

int main() {
	int	cale;					// wprowadzamy cale
	double	centymetry;			// wynik w centymetrach
	double 	przelicznik = 2.54;		// przelicznik: cale na centymetry

	std::cout << "Podaj wielosc w calach: ";
	std::cin >> cale;				// przyjecie danych w calach

	centymetry = cale * przelicznik;	// przeliczenie

	std::cout << "\n";

	// wypisanie wynikow
	std::cout << cale << " (w calach) - jest rownoznaczne z: " << centymetry << " (w centymetrach)\n";
}
