#include <iostream>
#include <cmath>

	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		float x, y, b;
		cout << "x = ";
		cin >> x;
		cout << "y= ";
		cin >> y;
		cout << "b = ";
		cin >> b;
		if ((b <= y) || (b < x)) 
		{
			cout << "Вычисления невозможны";
		}
		else 
		{
			cout << "z = " << log(b - y) * sqrt(b - x);
		}
	}