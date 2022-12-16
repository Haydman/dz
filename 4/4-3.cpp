#include <iostream>  
#include <cmath>

using namespace std;

double pr(float a1, float b)
{
	return a1 * b;
}
double tr(float a2, float b2, float c2, float p)
{
	return sqrt(p * (p - a2) * (p - b2) * (p - c2));
}
double kr(float R)
{
	float pi = 3.14;
	return pi * pow(R, 2);
}
int main() 
{
	setlocale(LC_ALL, "Russian");
	float a1, b, R, a2, b2, c2, p;
	cout << "Введите параметры прямоугольника a1, b: ";
	cin >> a1 >> b;
	cout << "Введите параметры треугольника a2, b2, c2: ";
	cin >> a2 >> b2 >> c2;
	p = (a2 + b2 + c2) / 2; 
	cout << "Введите параметры круга R: ";
	cin >> R;
	cout << "Площадь прямоугольника: " << pr(a1, b) << endl;
	if ((a2 >= b2 + c2) or (b2 >= a2 + c2) or (c2 >= a2 + b2))
	{
		cout << "tr not exist" << endl;
	}
	else
	{
		cout << "Площадь треугольника: " << tr(a2, b2, c2, p) << endl;
	}
	cout << "Площадь круга: " << kr(R) << endl;
}