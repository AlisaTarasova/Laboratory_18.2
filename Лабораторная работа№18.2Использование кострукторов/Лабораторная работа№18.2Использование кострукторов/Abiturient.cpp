#include "Abiturient.h"
#include <iostream>
#include <string>
using namespace std;

Abiturient::Abiturient()
{
	F = "";
	I = "";
	O = "";
	Specialty = "";
	bEGE = 0;
	cout << "Конструктор без параметров" <<endl;
}

Abiturient::Abiturient(string f, string i, string o,string specialty, int B)
{
	F = f;
	I = i;
	O = o;
	Specialty = specialty;
	bEGE = B;
	cout << "Конструктор с параметрами" << endl;
}

Abiturient::Abiturient (const Abiturient &a)
{
	F = a.F;
	I = a.I;
	O = a.O;
	Specialty = a.Specialty;
	bEGE = a.bEGE;
	cout << "Конструктор скопирован в объект a3." << endl;
}

Abiturient::~Abiturient()
{
	cout << "Память освобождена." << endl;
}

string Abiturient::Get_F()
{
	return F;
}

string Abiturient::Get_I()
{
	return I;
}

string Abiturient::Get_O()
{
	return O;
}

string Abiturient::Get_Specialty()
{
	return Specialty;
}

int Abiturient::Get_bEGE()
{
	return bEGE;
}

void Abiturient::Set_F(string f)
{
	F = f;
}

void Abiturient::Set_I(string i)
{
	I = i;
}

void Abiturient::Set_O(string o)
{
	O = o;
}

void Abiturient::Set_Specialty(string specialty)
{
	Specialty = specialty;
}

void Abiturient::Set_bEGE(int B)
{
	bEGE = B;
}

void Abiturient::Print()
{
	cout << "ФИО: " << F<<" "<<I << " " <<O << endl;
	cout << "Специальность: " << Specialty << endl;
	cout << "Общий балл за ЕГЭ: " << bEGE << endl<<endl;
}
