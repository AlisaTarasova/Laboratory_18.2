#include "Abiturient.h"
#include <iostream>
#include <string>
using namespace std;

Abiturient Inf()
{
    string f, i, o, specialty;
    int B;
    cout << "Введите ФИО: ";
    cin >> f >> i >> o;
    cout << "Введите специальность: ";
    cin >> specialty;
    cout << "Введите общий балл за ЕГЭ: ";
    cin >> B;
    Abiturient a5(f,i,o,specialty,B);
    return a5;
}

void Print_Abiturient(Abiturient a)
{
    a.Print();
}

int main()
{
    setlocale(0, "");
    system("color F0");

    Abiturient a1;
    a1.Print();

    Abiturient a2("Соколов", "Иван", "Сергеевич", "Программист", 300);
    a2.Print();

    Abiturient a3 (a2);
    a3.Print();

    cout << "Геттеры и Сеттеры:"<<endl;
    a3.Set_F("Смирнова");
    a3.Set_I("Дарья");
    a3.Set_O("Павловна");
    a3.Set_Specialty("Учитель");
    a3.Set_bEGE(263);
    a3.Print();

    Print_Abiturient (a3);

    Abiturient a4 = Inf();
    a4.Print();
}

//Пользовательский класс АБИТУРИЕНТ
//ФИО абитуриента– string
//Специальность – string
//Балл ЕГЭ– int
