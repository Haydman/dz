#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		ofstream File("file.txt");
		File << "Its my file";
		File.close();
		string text;
		ifstream Readfile("file.txt");
		while (getline(Readfile, text)) 
		{
			cout << text;
		}
		Readfile.close();
	}