#include <iostream>

using namespace std;

template <class T>
T sum_pos_num(T* arr, int amount);

int main()
{
	int amount, check;
	setlocale(LC_ALL, "Rus");

	while (true)
	{

		cout << "Введите длину массива:" << endl;
		cin >> amount;

		cout << "Какой массив будем создавать: " << endl;
		cout << "1) INT" << endl;
		cout << "2) DOUBLE" << endl;
		cout << "3) Выход" << endl;
		cin >> check;
		if (check == 1)
		{
			int* parr = new int[amount];
			cout << "Заполните массив." << endl;
			for (int i = 0; i < amount; i++)
			{
				cout << i+1 << "-й элемент: ";
				cin >> *(parr + i);
			}
			cout << "Сумма положительных: " << sum_pos_num(parr, amount) << endl;
			delete[] parr;
		}
		else if (check == 2)
		{
			double* parr = new double[amount];
			for (int i = 0; i < amount; i++)
			{
				cout << i+1 << "-й элемент: ";
				cin >> *(parr + i);
			}
			cout << "Сумма положительных: " << sum_pos_num(parr, amount) << endl;
			delete[] parr;
		}
		else if (check == 3)
		{
			break;
			system("Pause");
			return 0;
		}
		else
		{
			cout << "Error" << endl;
		}


	}
}

template <class T>
T sum_pos_num(T *arr, int amount) 
{
	T sum = 0;
	for (int i = 0; i < amount; i++)
	{
		if (*(arr + i) > 0) 
		{
			sum += *(arr + i);
		}
	}
	return sum;
}
