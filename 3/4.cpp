#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		string text;
		ifstream Rfile("1.txt");
		getline(Rfile, text);
		Rfile.close();
		for (int i = 0; i < text.size(); i++) 
		{
			if ((47 <= int(text[i])) && (58 >= int(text[i]))) 
			{
				cout << text[i];
			}
		}

	}