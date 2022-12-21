#include <iostream>
using namespace std;

int main () {
	int x, y, result;
	cout << "x: ";
	cin >> x;
	cout << "y: ";
	cin >> y;
	for (int i = 0; i < x; i++) {
		for (int j = i; j < x; j++) {
			for (int i = 0; i < y; i++) {
				for (int j = i; j < y; j++) {
					result++;
				}
			}
		}
	}
	cout << result << endl;
	cout << "--------------------------------------------\n";
	main();
}