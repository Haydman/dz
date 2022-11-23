#include <iostream>
using namespace std;

int fact(int x){
    if (x==1 or x==0){
        return 1;
    }
    return x * fact(x-1);
}

int main(){
    cout << fact(5);
}