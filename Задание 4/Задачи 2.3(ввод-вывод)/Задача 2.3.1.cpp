#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	int a, b; //Объявление переменных
	cout << "Введите два числа\n";
	cin >> a >> b; //Ввод значений
	cout << "Произведение этих чисел равно " << a * b; //Вывод
	return 0;
}
