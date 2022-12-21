// 5. Поиск в тексте фразы максимальной длины
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream ifile("53.txt");
	string str, w, strLen, d = " ";
	string letter = "";
	 while (ifile.peek() >= 0) { // проход до конца файла
        ifile >> letter;
		str = str + letter + " ";
    }
    ifile.close();
    
	int b, e = 0;
	while ((b = str.find_first_not_of(d, e)) != str.npos) {
		e = str.find_first_of(d, b);
		w = str.substr(b, e - b);
		if (w.size() > strLen.size())
			strLen = w;
	}
	cout << strLen << endl;
	return 0;
}