#pragma once
#include <iostream>
#include <string>
using namespace std;

class Abiturient
{
	string F;
	string I;
	string O;
	string Specialty;
	int bEGE;
public:
	Abiturient();
	Abiturient(string F, string I, string O, string Specialty,int bEGE);
	Abiturient(const Abiturient& a);
	~Abiturient();
	string Get_F();
	string Get_I();
	string Get_O();
	string Get_Specialty();
	int Get_bEGE();

	void Set_F(string f);
	void Set_I(string i);
	void Set_O(string o);
	void Set_Specialty(string specialty);
	void Set_bEGE(int B);

	void Print();

};
