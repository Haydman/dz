#include <iostream>  
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int main() 
{
	ofstream File("3-3.txt");
	File << "HELLO";
	File.close();
	string text;
	ifstream Readfile("3-3.txt");
	while (getline(Readfile, text)) 
	{
		cout << text;
	}
	Readfile.close();
}
