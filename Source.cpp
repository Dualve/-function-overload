#include<iostream>

using namespace std;

int middle(int x1, int y1, int x2, int y2);

double middle(double x1, double y1, double x2, double y2);

int middle(int x1, int y1, int z1, int x2, int y2, int z2);

double middle(double x1, double y1, double z1, double x2, double y2, double z2);


int main()
{
	while (true)
	{
		int check_a, check_b;
		int ix_1, iy_1, iz_1, ix_2, iy_2, iz_2;
		double dx_1, dy_1, dz_1, dx_2, dy_2, dz_2;

		setlocale(LC_ALL, "Rus");
		cout << "Центр какого отрезка Вы хотите искать\n";
		cout << "1) 2D\n";
		cout << "2) 3D\n";
		cout << "3) Если хотите выйти." << endl;
		cin >> check_a;
		if (check_a == 1)
		{
			cout << "Какого типа координаты\n 1) INT\n 2)DOUBLE" << endl;
			cin >> check_b;
			if (check_b == 1)
			{
				cout << "Введите значния X1, Y1, X2, Y2" << endl;
				cout << "X1 = " << endl;
				cin >> ix_1;
				cout << "Y1 = " << endl;
				cin >> iy_1;
				cout << "X2 = " << endl;
				cin >> ix_2;
				cout << "Y2 = " << endl;
				cin >> iy_2;
				cout << middle(ix_1, iy_1, ix_2, iy_2) << endl;
			}
			if (check_b == 2)
			{
				cout << "Введите значния X1, Y1, X2, Y2" << endl;
				cout << "X1 = " << endl;
				cin >> dx_1;
				cout << "Y1 = " << endl;
				cin >> dy_1;
				cout << "X2 = " << endl;
				cin >> dx_2;
				cout << "Y2 = " << endl;
				cin >> dy_2;
				cout << middle(dx_1, dy_1, dx_2, dy_2) << endl;
			}

		}
		if (check_a == 2)
		{
			cout << "Какого типа координаты\n 1) INT\n 2)DOUBLE" << endl;
			cin >> check_b;
			if (check_b == 1)
			{
				cout << "Введите значния X1, Y1, X2, Y2" << endl;
				cout << "X1 = " << endl;
				cin >> ix_1;
				cout << "Y1 = " << endl;
				cin >> iy_1;
				cout << "Z1 = " << endl;
				cin >> iz_1;
				cout << "X2 = " << endl;
				cin >> ix_2;
				cout << "Y2 = " << endl;
				cin >> iy_2;
				cout << "Z2 = " << endl;
				cin >> iz_2;
				cout << middle(ix_1, iy_1, iz_1, ix_2, iy_2, iz_2) << endl;
			}
			if (check_b == 2)
			{
				cout << "Введите значния X1, Y1, X2, Y2" << endl;
				cout << "X1 = " << endl;
				cin >> dx_1;
				cout << "Y1 = " << endl;
				cin >> dy_1;
				cout << "Z1 = " << endl;
				cin >> dz_1;
				cout << "X2 = " << endl;
				cin >> dx_2;
				cout << "Y2 = " << endl;
				cin >> dy_2;
				cout << "Z2 = " << endl;
				cin >> dz_2;
				cout << middle(dx_1, dy_1, dz_1, dx_2, dy_2, dz_2) << endl;
			}
			if (check_a == 3)
			{
				break;
				system("Pause");
				return 0;
			}
		}

	}
}

int middle(int x1, int y1, int x2, int y2) 
{
	int x = (x2 - x1) / 2;
	int y = (y2 - y1) / 2;
	cout << "Координаты центра равны: x = " << x << " y = " << y << endl;
	return x, y;
}

double middle(double x1, double y1, double x2, double y2)
{
	double x = (x2 - x1) / 2;
	double y = (y2 - y1) / 2;
	cout << "Координаты центра равны: x = " << x << " y = " << y << endl;
	return x, y;
}

int middle(int x1, int y1, int z1, int x2, int y2,  int z2)
{
	int x = (x2 - x1) / 2;
	int y = (y2 - y1) / 2;
	int z = (z2 - z1) / 2;
	cout << "Координаты центра равны: x = " << x << " y = " << y << " z = " << z << endl;
	return x, y, z;
}

double middle(double x1, double y1, double z1, double x2, double y2, double z2)
{
	double x = (x2 - x1) / 2;
	double y = (y2 - y1) / 2;
	double z = (z2 - z1) / 2;
	cout << "Координаты центра равны: x = " << x << " y = " << y <<" z = "<< z << endl;
	return x, y, z;
}