#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

	int main() 
	{
		const int SIZE = 30;
		string strng;
		char str[SIZE];
		cout << "Введите строку из 30 символов: ";
		cin >> strng;
		for (int i = 0; i < SIZE; i++) 
		{
			str[i] = strng[i];
		}
		sort(strng.begin(), strng.end());
		cout << strng << endl;
	}
