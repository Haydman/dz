#include <iostream>
#include <cmath>
using namespace std;

double a, b, c, h, r, p;
double rect(double a, double b) { // ?????????????
	if (a <= 0 or b <= 0) {
		return -1;
	}
	return a * b;
}

double trin(double a, double b, double c) { // ??????????? (?? 3 ????????)
	if (a <= 0 or b <= 0 or c <= 0 or a + b <= c or a + c <= b or b + c <= a) {
		return -1;
	}
	p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c) );
}


double circle(double r) { // ????
	if (r <= 0) {
		return -1;	
	}
	return M_PI * pow(r, 2);
}

int main() {
	int select;
	cout << "-----------------------\n";
	cout << "1 (reactagle) / 2 (trinagle) / 3 (circle): ";
	cin >> select;
	switch (select) {
		case 1: // ?????????????
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			main();
		case 2: // ???????????
			cout << "a = ";
			cin >> a;
			cout << "b = ";
			cin >> b;
			cout << "c = ";
			cin >> c;
			cout << "S trinagle = " << trin(a, b, c) << endl;
			main();
		case 3: // ????
			cout << "r = ";
			cin >> r;
			cout << "S circle = " <<  circle(r) << endl;
			main();
	}
}