#include<iostream>
using namespace std;

int main()
{
	const int a = 10; // Объявление константы
	int b,c; //Объяление переменных 
	b = 2 * a; //Значение 20
	cout << a << "\n";
	cout << b << "\n";
	c = --b; //Значение 19
	cout << c << "\n"; // Вывод значений 
	return 0;
}