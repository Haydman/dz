// 25. Организовать создание текстового файла. Подсчитать в текстовом файле число непустых строк, в которых символы упорядочены по возрастанию.
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main () {
  string strX = "";
  
  ofstream file("55.txt");
  while (strX != "0") { // ввод чисел
  	cout << "Input string: ";
  	getline(cin, strX);
 	file << strX << "\n"; // запись в файл
  }
  file.close();
  
  int k = 0;
  ifstream ifile("55.txt"); // создать текстовый файл
  string str;
  while (getline(ifile, str)) {
    if (is_sorted(str.begin(), str.end())) k++;
  }
  ifile.close();
  
  cout << "result: "<< k - 1;
  return 0;
}