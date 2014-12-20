#include <iostream>

int main()
{
	char litera;
	do {
		std::cout << "Napisz jakas litere: ";
		std::cin >> litera;
		std::cout << "\n Napisales: " << litera << " \n";
	}while(litera != 'K' && litera != 'k');

	std::cout << "\n Skoro napisales " << litera << " to nie ma imprezy... mozesz wracac... w klapkach...";
}
