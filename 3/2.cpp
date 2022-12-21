#include <iostream>
#include <math.h>
using namespace std;

int main() {
double S; 
double n; 
double mTest; 
double m; 
double r;
double rTemp = 0.0001;
cout << "----------------------- \n";
cout << "S = ";
cin >> S;
cout << "n = ";
cin >> n;
cout << "mTest = ";
cin >> mTest;
  

if (n == 0 or S <= 0) { 
  cout << "Incorrect years or amount of credit! \n";
  main();
  }

while (m < mTest) { 
  r = rTemp;
  m = S * r * pow(1 + r, n) / (12 * (pow(1 + r, n) - 1)); 
  rTemp = rTemp + 0.0001;
  }

cout << "p = " << r * 100 << "%" << endl;  
main();
}