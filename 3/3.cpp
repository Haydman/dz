#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
using namespace std;

	int main() 
	{
		setlocale(LC_ALL, "Russian"); 
		ofstream File("file.txt"); // Создаем файл
		File << "Its my file"; // Записываем в файл строку "Its my file"
		File.close(); // Закрываем файл
		string text; // Создаем переменную для хранения текста
		ifstream Readfile("file.txt"); // Открываем файл для чтения
		while (getline(Readfile, text)) // Читаем построчно
		{
			cout << text; // Выводим текст
		}
		Readfile.close();
	}