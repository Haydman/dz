#include <iostream>
#include <cmath>
#include <string>
	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		char alfa[30];
		cout << "Введите строку из 30  букв" << ": ";
		cin >> alfa;
		for (int i = 0; i < strlen(alfa) - 1; i++) 
		{
			for (int j = strlen(alfa) - 1; i < j; j--) 
			{
				if (alfa[j] < alfa[j - 1]) 
				{
					swap(alfa[j], alfa[j - 1]);
				}
			}
		}
		cout << alfa;
	}
