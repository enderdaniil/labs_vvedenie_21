#include <iostream>
#include <string>

using namespace std;

string shifr(string s)
{

	string needed;
	int len = s.length();
	int len_c, len_n;
	if (len % 2 == 0)
	{
		len_c = len / 2;
		len_n = len / 2;
	}
	else
	{
		len_c = len / 2 - 1;
		len_n = len / 2;
	}
	char* chet = new char[len_c];
	char* nechet = new char[len_n];
	for (int i = 0, j = 0, k = 1; i < len; i++)
	{
		if (i % 2 == 0)
		{
			chet[j] = s[i];
			j++;
		}
		else
		{
			nechet[len_n - k] = s[i];
			k++;
		}
	}
	
	needed = string(chet) + string(nechet);

	return needed;
}
                      
int main()
{
	string s;
	cout << "Vvedite stroku" << endl;
	getline(cin, s);
	string needed = shifr(s);
	cout << needed;
	return 0;
}
