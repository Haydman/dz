#include <iostream>  
#include <cmath>
#include <string>
#include <fstream>

using namespace std;

int main() 
{
	ofstream File("4-1.txt");
	double q;
	for (int i = 0; i < 10; i++) 
	{
		cout << "Input number: ";
		cin >> q;
		File << q << endl;
	}
	File.close();
	ifstream Rfile("4-1.txt");
	double a, sum = 0.0;
	while (Rfile >> a) 
	{
		sum += a;
	}
	cout << "Summa: " << sum;
	Rfile.close();
}
