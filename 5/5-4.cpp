// 12. Дано натуральное число n. Вычислить
#include <iostream>
#include <cmath>
using namespace std;

double summN(int n, double k = 1, double low = 0) {
    double fact = 1;
    for (int i = 1; i <= k; i++)
		fact = fact * i; // Факториал
		
    low += (1 / k); // сумма дробей
    double result = fact / pow(low, k);
    if (n == k)
		return result;
    return summN(n, ++k, low) + result;
}

int main() {
    setlocale(0, "");
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "y = " << summN(n) << endl; // сумма всех n
    return 0;
}