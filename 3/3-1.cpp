#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "¬ведите срок выплаты кредита n = ";
	cin >> n;
	float p, S;
	cout << "¬ведите сумму займа S = ";
	cin >> S;
	cout << "¬ведите процент займа p = ";
	cin >> p;
	float r = p / 100;
	if ((pow((1 + r), 2) - 1) == 0) 
	{
		cout << "¬веден неверный процент ";
	}
	else 
	{
		cout << "ћес€чна€ выплата: " << (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
	}
}