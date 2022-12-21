#include <iostream>
using namespace std;

int main () {
	int m;
	cout << "m: ";
	cin >> m;
	int blades4 = m % 3;
	int blades3 = (m - 4 * blades4) / 3;
	if (blades3 >= 0) {
		cout << blades3 << endl;
		cout << blades4 << endl;
	}
	else {
		cout << "Error!";
	}
	cout << "---------------------------------------\n";
	main();
}