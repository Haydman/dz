#include <iostream>
using namespace std;

int main () {
	int N, K;
	cout << "N: ";
	cin >> N;
	cout << "K: ";
	cin >> K;
	while (K != 1) {
		N = (N - K % 2) / 2;
		K = K / 2;
	}
	cout << (N - 1) / 2 << endl;
	cout << N / 2 << endl;
	cout << "------------------------------\n";
	main();
}