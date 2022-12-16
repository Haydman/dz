#include <iostream>
#include <cmath>

using namespace std;

int NODminus(int a, int b) 
{
    while (a > 0 and b > 0)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a + b;
}

int NODdevision(int a, int b) 
{
    while (a > 0 and b > 0)
        if (a > b)
            a %= b;
        else
            b %= a;
    return a + b;
}

int main() 
{
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    if (a <= 0 or b <= 0) {
        cout << "Error" << endl;
    }
    else {
	 	cout << "NODminus = " << NODminus(abs(a), abs(b)) << endl;
    	cout << "NODdevision = " << NODdevision(abs(a), abs(b)) << endl;
	}
}