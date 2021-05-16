#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Rus");

	Kvitantsiya t1;
	Kvitantsiya t2(10, "13 октября", 1235.5);
	Kvitantsiya t3(t2);

	cout << "Объект без параметров: " << endl;
	t1.Show();
	cout << "Объект с параметрами: " << endl;
	t2.Show();
	cout << "Скопированный объект: " << endl;
	t3.Show();
	return 0;
}