#include <iostream>
#include <string>
#include "Header.h"
using namespace std;

int main()
{
	system("color F0");
	setlocale(LC_ALL, "Rus");

	Kvitantsiya t1;
	Kvitantsiya t2(10, "13 �������", 1235.5);
	Kvitantsiya t3(t2);

	cout << "������ ��� ����������: " << endl;
	t1.Show();
	cout << "������ � �����������: " << endl;
	t2.Show();
	cout << "������������� ������: " << endl;
	t3.Show();
	return 0;
}