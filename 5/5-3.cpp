#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(0, "rus");
    ifstream file("C://Users//Zzz//Documents//HomeWork_5_task_3_1.txt");
    string line;
    ofstream to_file("C://Users//Zzz//Documents//HomeWork_5_task_3_1_replaced.txt");
    char replaced = ' ';
    char to = '_';
    while (getline(file, line)) {
        for (int i = 0; i < line.size(); i++) if (line[i] == replaced) line[i] = to;
        to_file << line << endl;
        cout << line << endl;
    }
    to_file.close();
    file.close();

}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Pr