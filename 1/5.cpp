#include <iostream>
#include <cmath>

	using namespace std;

	int main() 
	{
		setlocale(0, "");
		cout << "Если вы согласны с утверждением вводите 1, если нет 0 " << "\n";
		int vrema, shtori, lampa;
		cout << "На улице день ";
		cin >> vrema;
		cout << "Лампа включена ";
		cin >> lampa;
		cout << "Шторы раздвинуты ";
		cin >> shtori;
		if ((vrema != 0 && vrema != 1) || (shtori != 0 && shtori != 1) || (lampa != 0 && lampa != 1)) 
		{
			cout << "Попробуйте снова с учетом условий ввода))";
		}
		else 
		{
			if ((shtori == 1 && vrema == 1) || (lampa == 1)) 
			{
				cout << "В комнате светло";
			}
			else 
			{
				cout << "В комнате темно";
			}
		}

	}