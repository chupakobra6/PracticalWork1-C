#include <iostream>
#include <Windows.h>

using namespace std;


int Fi(int i)
{
	int value = 0;
	if (i < 1) return 0;
	else if (i == 1) return 1;
	else return Fi(i - 1) + Fi(i - 2);
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Добро пожаловать в калькулятор!\n";
	bool check = true;

	do
	{
		cout << "Выберите операцию:\n 1 - +\n 2 - -\n 3 - *\n 4 - \\\n 5 - **\n 6 - abs\n 7 - 1%\n 8 - !\n 9 - %\n 10 - Fi\n 11 - log2\n 12 - Выход\n";

		int choice;
		cin >> choice;

		if (choice == 1) // +
		{
			cout << "Введите два числа - \n";
			double a{}, b{};
			cin >> a;
			cin >> b;
			cout << "Результат: " << a + b << "\n";
		}
		else if (choice == 2) // -
		{
			cout << "Введите два числа - \n";
			double a{}, b{};
			cin >> a;
			cin >> b;
			cout << "Результат: " << a - b << "\n";
		}
		else if (choice == 3) // *
		{
			cout << "Введите два числа - \n";
			double a{}, b{};
			cin >> a;
			cin >> b;
			cout << "Результат: " << a * b << "\n";
		}
		else if (choice == 4) // /
		{
			cout << "Введите два числа - \n";
			double a{}, b{};
			cin >> a;
			cin >> b;
			cout << "Результат: " << a / b << "\n";
		}
		else if (choice == 5) // **
		{
			cout << "Введите два числа - \n";
			double a{}, b{}, c{};
			cin >> a;
			cin >> b;
			c = a;

			for (int i = 1; i < b; i++)
			{
				c *= a;
			}
			cout << "Результат: " << c << "\n";
		}
		else if (choice == 6) // abs
		{
			cout << "Введите число - ";
			double a{}, b = 1;
			cin >> a;

			if (a > 0)
			{
				while (pow(b, 2) < a)
				{
					b += 1;
				}

				int n = 1;

				while (n <= 10)
				{
					b = 0.5 * (b + a / b);
					n += 1;
				}

				cout << "Результат: " << round(b) << "\n";
			}
			else
			{
				cout << "Число должно быть больше нуля!";
			}
		}
		else if (choice == 7) // 1% from number
		{
			cout << "Введите число - ";
			double a{};
			cin >> a;
			cout << "Результат: " << a / 100 << "\n";
		}
		else if (choice == 8) // ! factorial
		{
			cout << "Введите число - ";
			double a = 1, n;
			cin >> n;

			for (int i = 2; i <= n; i++)
			{
				a *= i;
			}

			cout << "Результат: " << a << "\n";
		}
		else if (choice == 9) // %
		{
			cout << "Введите два числа - \n";
			int a{}, b{};
			cin >> a;
			cin >> b;
			cout << "Результат: " << a % b << "\n";
		}
		else if (choice == 10) // fibonacci
		{
			cout << "Введите кол-во итераций - ";
			int n{}, a{};
			cin >> n;

			for (int i = 0; i < n; i++)
			{
				int result = Fi(i);
				cout << result << "\n";
				a += result;
			}
			cout << "Сумма: " << a << "\n";
		}
		else if (choice == 11) // log2
		{
			cout << "Введите число - ";
			double a{};
			cin >> a;

			if (a > 0)
			{
				double log2 = log(a) / log(2);
				cout << "Результат: " << log2 << "\n";
			}
			else
			{
				cout << "Число должно быть больше нуля";
			}
		}
		else if (choice == 12) // exit
		{
			check = false;
		}

	} while (check);
}