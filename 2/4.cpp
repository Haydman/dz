#include <iostream>
#include <cmath>

	using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian");
		float N = 0;
		while ((N <= 0) || (N != int(N))) {
			cout << "Enter a number N = ";
			cin >> N;
		}
		int i = 0;
		N -= 1;
		while (i != 10) 
		{
			N += 1;
			cout << N << " ";
			i += 1;
		}
	}