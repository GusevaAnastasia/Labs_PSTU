#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	char a, b, c, d, e; //Объявление переменных
	cout << "Введите пять символов\n";
	cin >> a >> b >> c >> d >> e; //Ввод символов
	cout << "Эти символы в обратном порядке: ";
	cout << e << " " << d << " " << c << " " << b << " " << a << endl; //Вывод символов в обратном порядке
	return 0;
}
