#include <iostream>
#include <cmath>

using namespace std;
//ax^2+bx+c=0
int main() 
{
	setlocale(LC_ALL, "Russian");
	float a;
	float b;
	float c;
	cin >> a >> b >> c;
	float d;
	float k;
	float l;
	if (a == 0) 
	{
		if (b == 0) 
		{
			if (c == 0) 
			{
				cout << "x любое число";
			}
			cout << "решений нет";
		}
		if (b != 0) 
		{
			cout << (0 - c) / b;
		}
	}
	k = pow(b, 2);
	d = k - 4 * a * c;
	if (d == 0) 
	{
		cout << (0 - b) / (a * a);
	}
	if (d > 0) 
	{
		l = sqrt(d);
		cout << ((0 - b) + l) / (2 * a);
		cout << ((0 - b) - l) / (2 * a);
	}
	if (d < 0) {
		cout << "Корней нет";
	}