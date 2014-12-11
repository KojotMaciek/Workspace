#include <iostream>
using namespace std;

void wypisz(string imie) {
	cout << "Czesc" << " " << imie << endl;
}

string wypisz2() {
	string imie, zdanie;
	cout << "Jak masz na imie?" << endl;
	cin >> imie;
	zdanie = "Czesc " + imie;
	return zdanie;
}

int main() {
//	wypisz("Maciek");
//	wypisz("Ewelina");
	cout << "Moje repo tez juz dziala!" << endl << endl;
	for(int i = 0; i < 3; i++)
		cout << wypisz2() << endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
