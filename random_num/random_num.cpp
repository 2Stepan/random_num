#include <iostream>
#include <windows.h>
#include <random>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(1, 100);

	int random_num = dist(gen);
	int num_user = 0;
	int chose;
	int popitka = 0;
	while (num_user != random_num)
	{
		popitka++;
		cout << "Введите число: ";
		cin >> num_user;
		if (num_user > random_num)
		{
			cout << "\nВаше число больше загаданного";
		}
		else if (num_user < random_num)
		{
			cout << "\nВаше число меньше загаданного";
		}
		else
		{
			cout << "\nВы отгадали загаданное число!!!\nВам потребоволось " << popitka << " попыток(и)";
		}
		if (num_user != random_num)
		{
			cout << "\nЖелаете завершить игру?\n0.Завершить\n1.Продолжить\nВаш выбор: ";
			cin >> chose;
			switch (chose)
			{
			case 0:
				cout << "\nВы решили завершить прогамму,было загаданно число: " << random_num << "\nБыло  сделано попыток: " << popitka;
				num_user = random_num;
				break;
			case 1:
				break;
			default:
				cout << "\nВы ввели не то значение\n";
				break;
			}
		}
		
	}
	return 0;
}
