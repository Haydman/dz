#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
	using namespace std;

	int main() 
	{
		ifstream file("1.txt");
		string str;
		while (getline(file, str)) 
		{
			for (int i = 0; i < str.length(); i++) 
			{
				if (isdigit(str[i])) 
				{
					cout << str[i];
				}
				else 
				{
					cout << " ";
				}
			}
		}

	}