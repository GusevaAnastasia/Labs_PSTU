#include<iostream>
using namespace std;


 int main()
{
	setlocale(LC_ALL, "Russian");
	int X;
	cout << "Введите трехзначное число, в котором нет повторяющихся цифр\n";
	cin >> X;

	while ((X < 100) || (X > 999))
	{
		cout << "Введенное число не трехзначное, повторите ввод\n";
		cin >> X;
	}

	int a, b, c;
	a = X % 10;
	X = X/10;
	b = X % 10;
	c = X/10;
	
	while ((a == b) || (b == c) || (a == c))
	{
		cout << "В числе есть повторяющиеся цифры, повторите ввод\n";
		cin >> X;
		a = X % 10;
		X = X / 10;
		b = X % 10;
		c = X / 10;
	}
	
	cout << "Все возможные последовательности чисел:\n";
	cout << a << b << c<<"\n";
	cout << a << c << b<<"\n";
	cout << b << a << c<<"\n";
	cout << b << c << a<<"\n";
	cout << c << a << b<<"\n";
	cout << c << b << a<<"\n";

	if ((a > b) && (a > c))
	{
		cout << "Наибольшее из этих чисел: " << a;
		if (b > c)
		{
			cout << b << c;
		}
		else
		{
			cout << c << b;
		}
	}
	else
	{
		if ((b > a) && (b > c))
		{
			cout << "Наибольшее из этих чисел: " << b;
			if (a > c)
			{
				cout << a << c;
			}
			else
			{
				cout << c << a;
			}
		}
		else
		{
			cout << "Наибольшее из этих чисел: " << c;
			if (a > b)
			{
				cout << a << b;
			}
			else
			{
				cout << b << a;
			}
		}
	}
	return 0;
}
