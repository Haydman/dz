#include <iostream> 
#include <cmath>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���� ������� ������� n = ";
	cin >> n;
	float p, S;
	cout << "������� ����� ����� S = ";
	cin >> S;
	cout << "������� ������� ����� p = ";
	cin >> p;
	float r = p / 100;
	if ((pow((1 + r), 2) - 1) == 0) 
	{
		cout << "������ �������� ������� ";
	}
	else 
	{
		cout << "�������� �������: " << (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
	}
}