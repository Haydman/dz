#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float a;
	float b;
	cout << "Введите a: ";
	cin >> a;
	cout << "Введите b: ";
	cin >> b;
	cout << "Сложение" << endl << a + b << "\n";
	cout << "Вычитание" << endl << a - b << "\n";
	cout << "Умножение" << endl << a * b << "\n";
	cout << "Деление" << endl << a / b << "\n";

}