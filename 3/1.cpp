#include <iostream>
#include <cmath>
	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		int n;
		cout << "Введите срок выплаты кредита n = ";
		cin >> n;
		float p, S;
		cout << "Введите сумму займа S = ";
		cin >> S;
		cout << "Введите процент займа p = ";
		cin >> p;
		float r = p / 100;
		if ((pow((1 + r), 2) - 1) == 0) 
		{
			cout << "Введен неверный процент ";
		}
		else 
		{
			cout << (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));

		}
	}