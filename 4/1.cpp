#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Создать файл, записать в него 10 чисел, закрыть, потом вновь открыть файл и найти сумму чисел
    ofstream fout("file.txt");
    for(int i = 0; i < 10; i++){
        fout << i << " ";
    }
    fout.close();
    ifstream fin("file.txt");
    int sum = 0;
    int x;
    while(fin >> x){
        sum += x;
    }
    cout << sum << endl;
    return 0;
}