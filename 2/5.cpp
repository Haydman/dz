#include <iostream>
#include <cmath>

	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		float x = -4;
		while (x != 4.5) 
		{
			if (x - 1 == 0) 
			{
				cout << "При x = " << x << "нет решений" << "\n";
				x += 0.5;
			}
			else 
			{
				cout << "При x = " << x << ": " << (pow(x, 2) - 2 * x + 2) / (x - 1) << "\n";
				x += 0.5;
			}
		}
	}
