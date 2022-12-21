#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
	bool a = 0;
	ifstream file("3-4.txt");
	string str;
	while (getline(file, str)) 
	{
		for (int i = 0; i < str.length(); i++) 
		{
			if (isdigit(str[i])) 
			{
				cout << str[i];
				a = 1;
			}
			else 
			{
				if (a == 1)
				cout << " ";
				a = 0;
			}
		}
	}
}
