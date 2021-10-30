#include <iostream>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int N;
	N = rand() % 100;
	int i = 0;
	int X = 0;

	cout << "Компьютер загадал число. Попробуйте его отгадать\n";

	while ((i < 7)&&(X != N))
	{	
		cout << "Введите число от 0 до 100\n";
		cin >> X;
		i += 1;
		if (X > N)
		{
			cout << "Ваше число больше загаданного\n";
		}
		else if (X < N)
		{
			cout << "Ваше число меньше загаданного\n";
		}
		else 
		{
			cout << "Поздраляем! Вы угадали число!\n";
		}
	}

	if (i == 7)
	{
		cout << "К сожалению, вы не угадали число(\n";
		cout << "Загаданное число: " << N << "\n";
	}
	return 0;
}










