#include <iostream>
#include <string>

using namespace std;

string naz(string s)
{

	string needed = s;
	int beg = needed.rfind('\\\\');
	needed = needed.substr(0, beg);
	beg = needed.rfind('\\\\');
	if (beg == -1)
	{
		needed = "\\";
	}
	else
	{
		needed = needed.substr(beg+1);
	}


	return needed;
}
                      
int main()
{
	string s;
	cout << "Vvedite stroku" << endl;
	setlocale(LC_ALL, " ");
	getline(cin, s);
	string needed = naz(s);
	cout << needed;
	return 0;
}
