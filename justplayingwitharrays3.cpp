#include <iostream>
using namespace std;

void FillArray(int arr[], const int SIZE){
    for (size_t i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    cout << "Array has been filled!" << endl;
}
void TypeArray(int arr[], const int SIZE){
    for (size_t i = 0; i < SIZE; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main(){
    const int SIZE = 10;
    int arr[SIZE];
    FillArray(arr, SIZE);
    TypeArray(arr, SIZE);
}