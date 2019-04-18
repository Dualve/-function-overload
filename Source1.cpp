#include <iostream>

using namespace std;

struct WORKER
{
	char name[15];
	char position[15];
	char number[15];
	int salary;
};

void func_print(char letter);

void func_print(WORKER *profession, int amount);

void func_print(int *arr, int amount);

int main()
{
	setlocale(LC_ALL, "Rus");
	int check;
	int AMOUNT = 10;
	int AMOUNT_Struct = 1;

	// ARRAY
	int* p_darr = new int[AMOUNT];
	for (int i = 0; i < AMOUNT; i++)
	{
		p_darr[i] = i;
	}

	//CHAR
	char b = 'k';

	//STRUCTURE
	WORKER* driver = new WORKER[AMOUNT_Struct];
	for (int i = 0; i < AMOUNT_Struct; i++)
	{
		cout << "Имя рабочего:" << endl;
		cin >> (driver + i)->name;
		cout << "Название занимаемой должности:" << endl;
		cin >> (driver + i)->position;
		cout << "Телефон: " << endl;
		cin >> (driver + i)->number;
		cout << "Оклад: " << endl;
		cin >> (driver + i)->salary;
	}

	while (true)
	{
		cout << "Что будем печатать:\n 1) символ\n 2) массив\n 3) структуру\n 4) Выход" << endl;
		cin >> check;

		if (check == 1)
		{
			func_print(b);
		}
		else if (check == 2)
		{
			func_print(p_darr, AMOUNT);
		}
		else if (check == 3)
		{
			func_print(driver, AMOUNT_Struct);
		}
		else if (check == 4)
		{
			delete[] p_darr;
			delete[] driver;
			system("Pause");
			break;
			return 0;
		}
		else
		{
			cout << "Error";
		}

	}
}


void func_print( char letter)
{
	cout << letter << endl;
}

void func_print(WORKER *profession, int amount)
{
	for (int j = 0; j < amount; j++)
	{
		cout << (profession + j)->name << endl;
		cout << (profession + j)->position << endl;
		cout << (profession + j)->number << endl;
		cout << (profession + j)->salary << endl;
	}
}

void func_print( int *arr, int amount )
{
	for(int i =0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}