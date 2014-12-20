#include <iostream>
#include <string>
using namespace std;

int main() {
	int	cale;					// wprowadzamy cale
	double	centymetry;			// wynik w centymetrach
	double 	przelicznik = 2.54;		// przelicznik: cale na centymetry
	string cal;

	cout << "Podaj wielosc w calach: ";
	cin >> cale;				// przyjecie danych w calach

	centymetry = cale * przelicznik;	// przeliczenie

	cout << endl;

	// wypisanie wynikow
	//cout << cale << " (w calach) - jest rownoznaczne z: " << centymetry << " (w centymetrach)\n";

	if(cale == 1) cal = "cal";
	else if(cale >=2 && cale <= 4) cal = "cale";
	else if(cale >=5 && cale <= 21) cal = "cali";
	else if(cale % 10 >=2 && cale % 10 <= 4) cal = "cale";
	else cal = "cali";

	cout << cale << " " << cal << " - to: " << centymetry << " cm\n";
}
