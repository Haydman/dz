#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float b;
	float c;
    cout << "Введите b, а затем c" << endl;
	cin >> b >> c;
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