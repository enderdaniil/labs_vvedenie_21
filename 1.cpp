#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "Russia");

	string a;
	cout << "Vvedite Stroku" << endl;
	getline(cin, a);

	int kolvo = 1;

	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] == ' ')
		{
			kolvo++;
		}
	}

	cout << kolvo;
	
	return 0;

}
