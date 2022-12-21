#include <iostream>
using namespace std;

int CoupeNumber(int k) {
	if (k > 36) {
		return 8 - (k - 37) / 2;
	}
	else {
		return (k - 1) / 4;
	}
}

int main () {
	int coupe[9];
	int N, place;
	cout << "N: ";
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> place;
		coupe[CoupeNumber(place)] += 1;
	}
	int result = 0;
	int curr = 0;
	
	for (int i = 0; i < 9; i++) {
		if (coupe[i] == 6) {
			curr += 1;
			result = max(result, curr);
		}
		else {
			curr = 0;
		}
	}
	cout << result << endl;
	cout << "----------------------------------------\n";
	main();
}