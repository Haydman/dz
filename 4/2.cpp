#include <iostream>
using namespace std;

int Sign(int x){
    if(x > 0){
        return 1;
    } else if(x < 0){
        return -1;
    } else {
        return 0;
    }
}


int main(){
    int x;
    cout << "Введите число: ";
    cin >> x;
    if (Sign(x) == 1){
        cout << "Число положительное" << endl;
    } else if (Sign(x) == -1){
        cout << "Число отрицательное" << endl;
    } else {
        cout << "Число равно нулю" << endl;
    }
}