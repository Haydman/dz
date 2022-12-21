#include <iostream>
#include <math.h>
using namespace std;

int main() {
double S; 
double p;
double n;
double r;
double m;
cout << "----------------------- \n";
cout << "S = ";
cin >> S;
cout << "p = ";
cin >> p;
cout << "n = ";
cin >> n;
  
if (S <= 0) {
  cout << "Numbers cannot be less than zero! \n";
  main();
  }

else if (p == 0) {
  m = S / (12 * n);
}

else {
  r = p / 100;
  m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1));
}

if (12 * (pow(1 + r, n) - 1) < 0) {
  cout << "You can't divide by 0! \n";
  main();
  }

cout << "m = " << m << endl;
main();
}