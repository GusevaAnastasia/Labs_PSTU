#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int i = 1; //Объявление переменной
	cout << "Значение выражения ++i*i++ = " << ++i * i++ << "\n"; //Вывод результата
	return 0; 
}