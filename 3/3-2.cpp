#include <iostream>  
#include <cmath>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	int n;
	cout << "������� ���� ������� ������� n = ";
	cin >> n;
	float p, S, m;
	cout << "������� ����� ����� S = ";
	cin >> S;
	cout << "������� �������� ������� ����� m = ";
	cin >> m;
	float r;
	for (p = 1; p <= 100; p += 0.001) 
	{
		r = p / 100;
		float m1;
        m1 = (S * r * pow((1 + r), n)) / (12 * (pow((1 + r), n) - 1));
		if (m <= m1) 
		{
			cout << "������� p �����: " << p;
            return 0;
		}
	}
}