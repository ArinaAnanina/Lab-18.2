#pragma once
#include <iostream>
#include <string>
using namespace std;
class Kvitantsiya
{
	int Number;
	string Date;
	double Summ;
public:
	Kvitantsiya();
	Kvitantsiya(int Number, string Date, double Summ);
	Kvitantsiya(const Kvitantsiya& p);
	~Kvitantsiya();

	int Get_Number();
	string Get_Date();
	double Get_Summ();
	void Set_Number(int N);
	void Set_Date(int D);
	void Set_Summ(int S);
	void Show();
};
