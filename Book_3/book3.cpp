#include <iostream>

main() {
	int i;
	std::cout << "Podaj jakas liczbe: ";
	std::cin >> i;
	if(i - 4)
		std::cout << " zmienna i miala wartosc inna niz 4";
	else
		std::cout << " zmienna i miala wartosc rowna 4";
}
