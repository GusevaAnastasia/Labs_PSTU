#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int g;  //Объявление переменной для числа галлонов
    cout << "Введите число галлонов \n";
	cin >> g; //Ввод числа галлонов
	cout << g << " галлонов равны " << g / 7.481<<" кубических футов\n"; //Вывод значения в футах
	return 0;
}
