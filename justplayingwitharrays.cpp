#include <iostream>
using namespace std;

int main(){
    const int SIZE = 7;
    int n;
    int week[SIZE] = {1,2,3,4,5,6,7};
    
    cout << "Enter the number of the day : " << endl;
    cin >> n;
    if (n == 1){
        cout << "It's Monday! [" << week[n-1] << ']' << endl;
    }
    else if (n == 2){
        cout << "It's Tuesday! [" << week[n-1] << ']' << endl;
    }
    else if (n == 3){
        cout << "It's Wednesday! [" << week[n-1] << ']' << endl;
    }
    else if (n == 4){
        cout << "It's Thursday! [" << week[n-1] << ']' << endl;
    }
    else if (n == 5){
        cout << "It's Friday! [" << week[n-1] << ']' << endl;
    }
    else if (n == 6){
        cout << "It's Saturday! [" << week[n-1] << ']' << endl;
    }
    else if (n == 7){
        cout << "It's Sunday! [" << week[n-1] << ']' << endl;
    }
    else{
        cout << "Error! Enter the number from 1 to 7" << endl;
    }
}