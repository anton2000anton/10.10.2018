// 10.10.18.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
using namespace std;

double func(int F);
double func1(int F);
double func2(int F);
double func3(int F);
double func4(int F);
double func5(int F);
double func6(int F);
double func7(int F);
double func8(int F);



int main()
{
	int c;
	double n, Sum = 0;
	while (true)
	{
		cout << "Enter n.\n";
		cin >> n;
		cout << "Switch the operation from 1 to 8\n";
		cin >> c;
		if (n > 0 && 1 <= c && c <= 8)
		{
			break;
		}
		else
		{
			cout << "Error, try again.\n";
		}

	}

	switch (c)
	{
	case 1:
	{
		Sum = func1(n);
		break;
	}
	case 2:
	{
		Sum = func2(n);
		break;
	}
	case 3:
	{
		Sum = func3(n);
		break;
	}
	case 4:
	{
		Sum = func4(n);
		break;
	}
	case 5:
	{
		Sum = func5(n);
		break;
	}
	case 6:
	{
		Sum = func6(n);
		break;
	}
	case 7:
	{
		Sum = func7(n);
		break;
	}
	case 8:
	{
		Sum = func8(n);
		break;
	}
	default:
	}

	cout << "Result = " << Sum;


	system("pause");
	return 0;
}

double func1(int F)
{
	double sum = 0;
	for (double i = 1; i <= F; i++)
	{
		sum += 1 / i;
	}
	return sum;
}

double func2(int F)
{
	double sum = 1;
	for (int i = 0; i < F; i++)
	{
		sum *= 2;
	}
	return sum;
}

double func3(int F)
{
	double sum = 1;
	for (double i = 1; i <= F; i++)
	{
		sum *= (1 + (1 / (i*i)));
	}
	return sum;
}

double func4(int F)
{
	double sum = 0;
	for (double i = 1; i <= F; i++)
	{
		sum += (pow(-1, i + 1)) / (i*(i + 1));
	}
	return sum;
}

double func5(int F)
{
	double sum = 0;
	for (double i = 1; i <= F; i++)
	{
		sum += 1 / (pow(i, 5));
	}
	return sum;
}

double func6(int F)
{
	double sum = 0;
	for (double i = 1; i <= F; i++)
	{
		sum += 1 / (pow(2 * i + 1, 2));
	}
	return sum;
}

double func7(int F)
{
	double sum = 0;
	for (double i = 1; i <= F; i++)
	{
		sum += pow(-1, i) / (2 * i + 1);
	}
	return sum;
}

double func8(int F)
{
	double mus = 0, sum = 0;
	for (double i = 1; i <= F; i++)
	{
		sum += func(i) / func1(i);
	return sum;
}

	double func(int F)
{
	if (F == 0 || F == 1)
	{
		return 1;
	}
	else
	{
		return F * func(F - 1);
	}
}