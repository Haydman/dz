#include <iostream>
using namespace std;

void rand(int m, int i, int c, int x0);
void rand(int m, int i, int c, int x0) {
	cout << "\n\n";
	int* random = new int[i];
	random[0] = x0;
	for (int count = 0; count < i; count++) {
		random[count + 1] = ((m * random[count]+i) % c);
	}
	cout << "���ᨢ ࠭������ �ᥫ = ";
	for (int count = 0; count < i; count++) {
		cout <<"����� ����� ="<<count<<" ����� ="<< random[count] << "\n";
	}
	cout << "\n";
}

int main(){
    int m, i, c, x0;
	system("cls");
	cout << "����� ?������� ��砩��� �ᥫ?.\n ����ந�� ������� �ᥢ����砩��� �ᥫ �� ��㫥\n";
	cout << "������ �᫮ m=";
	cin >> m;
	cout << "\n������ �᫮ i=";
	cin >> i;
	cout << "\n������ �᫮ c=";
	cin >> c;
	cout << "\n������ ��砫쭮� ���祭�� x0=";
	cin >> x0;
	rand(m, i, c, x0);
}