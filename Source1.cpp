#include <iostream>
#include <string>
#include "Header.h"
using namespace std;
Kvitantsiya :: Kvitantsiya()
{
	Number = 12;
	Date = "2 ������";
	Summ = 12.4;
}
Kvitantsiya :: Kvitantsiya(int Number, string Date, double Summ)
{
	this->Number = Number;
	this->Date = Date;
	this->Summ = Summ;
}
Kvitantsiya :: Kvitantsiya(const Kvitantsiya& p)
{
	Number = p.Number;
	Date = p.Date;
	Summ = p.Summ;

}
Kvitantsiya :: ~Kvitantsiya() {};

//�����
int Kvitantsiya::Get_Number()
{
	return Number;
}
string Kvitantsiya :: Get_Date()
{
	return Date;
}
double Kvitantsiya :: Get_Summ()
{
	return Summ;
}

// ����
void Kvitantsiya :: Set_Number(int N)
{
	Number = N;
}
void Kvitantsiya :: Set_Date(int D)
{
	Date = D;
}
void Kvitantsiya :: Set_Summ(int S)
{
	Summ = S;
}
void Kvitantsiya :: Show()
{
	cout << "����� ���������: " << this->Number << endl;
	cout << "����: " << this->Date << endl;
	cout << "����� (� ������): " << this->Summ << endl;
}