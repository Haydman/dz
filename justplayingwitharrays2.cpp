#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
    const int ROW = 25;
    const int COL = 15;
    bool choice;
    int arr[ROW][COL];

    for (size_t i = 0; i < ROW; i++)
    {
        for (size_t j = 0; j < COL; j++)
        {
            arr[i][j] = rand() % 10;
        }

    }
    cout << "Массив создан! Желаете вывести результат на экран? " << endl << "1. Да" << endl << "0. Нет" << endl;
    cin >> choice;
    if (choice == true)
    {
        for (size_t i = 0; i < ROW; i++)
        {
            for (size_t j = 0; j < COL; j++)
            {
                cout << '[' << arr[i][j] << ']';
            }
            cout << endl;
        }
    }
    else {
        cout << "До связи!" << endl;
    }

}