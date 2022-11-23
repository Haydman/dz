#include <iostream>
#include <cmath>

	using namespace std;

	int main() 
	{
		setlocale(0, "");
		float p = 3.14;
		float h, R, r, l;
		cout << "h= ";
		cin >> h;
		cout << "R = ";
		cin >> R;
		cout << "r = ";
		cin >> r;
		l = sqrt(pow(R, 2) + pow(h, 2));
		float R1, r1;
		R1 = pow(R, 2);
		r1 = pow(r, 2);
		cout << "V = " << (p * h * (R1 + R * r + r1)) / 3 << "\n";
		cout << "S = " << p * (R1 + (R + r) * l + r1);
		
	}