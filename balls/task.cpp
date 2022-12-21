#include <iostream>
#include <algorithm>
using namespace std;

bool generate(int* urna, int n) {
    for (int i = 1; i < n+1; i++) {
        if (urna[i-1] == i) {
            return true;
        }
    }
    return false;
}

int main() {
	int n = 10;
    int k = 0; // искомый результат
    int fac = 3628800; // число перестановок n шариков
    int urna[n];
    for(int i = 0; i != n; i++) {
    	urna[i] = i + 1;
	}
	
	for (int i = 0; i < fac; i++) {
        next_permutation(urna, urna + n);
        if (generate (urna, n)) {
        	k++;
		}
    }
    cout << k << endl;
    return 0;
}

// 2293839