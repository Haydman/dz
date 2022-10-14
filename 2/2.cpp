#include <iostream>
#include <cmath>

	using namespace std;

	int main() {
		setlocale(LC_ALL, "Russian");
		float x, a;
		cout << "x = ";
		cin >> x;
		cout << "a= ";
		cin >> a;
		float w, l, s, x1;
		if (x == 0) 
		{
			cout << "Неподходящий x";
		}
		else 
		{
			if (abs(x) < 1) 
			{
				l = log(abs(x));
				cout << a * l;
			}
			else 
			{
				x1 = pow(x, 2);
				if (a < x1) 
				{
					cout << "Решений нет";
				}
				else 
				{
					cout << sqrt((a - x1));
				}

			}
		}
	}