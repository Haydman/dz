#include <iostream>

using namespace std;

int main(){
    char c;
    int i;
    cout << "??????? ??????: ";
    cin >> c;
    if (c == 'I'){
        i = 1;
    } else if (c == 'V'){
        i = 5;
    } else if (c == 'X'){
        i = 10;
    } else if (c == 'L'){
        i = 50;
    } else if (c == 'C'){
        i = 100;
    } else if (c == 'D'){
        i = 500;
    } else if (c == 'M'){
        i = 1000;
    } else {
        cout << "???????? ??????" << endl;
    }
    cout << "????????: " << i << endl;
}