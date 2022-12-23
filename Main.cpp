#include <iostream>
#include "Point.h"
#include "tiger.h"
#include "transport.h"
int main() {
	/*
	setlocale(LC_ALL, "Russian");
	char str[] = "zzz";
	Point my_point(5, 10, str);
	std::cout<<my_point.getX() << '\n';
	my_point.move(5, 9);
	std::cout << my_point.getX() << '\n';
	Tyger t(7, "yellow");
	std::cout << t << "\n";
	*/
	Tyger t1(7, "yellow");
	std::cout << t1.figth() << '\n';
	transport tr;
	comercial com;
	bus b;
	std::cout << tr.getSpeed() << "\n";
	std::cout << com.getSpeed() << "\n";
	std::cout << b.getSpeed() << "\n";
	return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy
