#include <iostream>  
#include <cmath>
#include <string.h>

using namespace std;

int main() 
{
	char l[30];
	cout << "Input 30 letters: ";
	cin >> l;
	for (int i = 0; i < strlen(l) - 1; i++) 
	{
		for (int j = strlen(l) - 1; i < j; j--) 
		{
			if (l[j] < l[j - 1]) 
			{
				swap(l[j], l[j - 1]);
			}
		}
	}
	cout << l;
}