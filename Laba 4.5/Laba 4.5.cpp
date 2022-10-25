// Lab_4.5
// < Казимир Богдан >
// Лабораторна робота № 4.5
// Варіант 10

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int main()
{
	double x, y, b, R, a;
	srand((unsigned)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		cout << "x = "; cin >> x;
		cout << "y = "; cin >> y;
		cout << "b = "; cin >> b;
		cout << "R = "; cin >> R;
		cout << "a = "; cin >> a;
		if ((y <= b && y >= 0 && R * R <= x * x + y * y && (-R <= x && x <= a)) ||
			(y <= 0 && y >= -b && x * x + y * y <= R * R && x <= 0))

			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
	cout << endl << fixed;

		for (int i = 0; i < 10; i++)
		{
			x = 6. * rand() / RAND_MAX - (a,b,R);
			y = 6. * rand() / RAND_MAX - (a,b,R);
			if ((y <= b && y >= 0 && R * R <= x * x + y * y && (-R <= x && x <= a)) ||
				(y <= 0 && y >= -b && x * x + y * y <= R * R && x <= 0))

				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "yes" << endl;
			else
				cout << setw(8) << setprecision(4) << x << " "
				<< setw(8) << setprecision(4) << y << " " << "no" << endl;
		}
	return 0;
}