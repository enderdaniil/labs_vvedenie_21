#include <iostream>
#include <string>

using namespace std;

int bukovi(string s)
{
	string needed = "яиюэоаыуеё";
	int count = 0;
	for (int i = 0; i < s.length() - 1; i++)
	{
		if (needed.find(s[i]) != -1)
		{
			count++;
		}
	}
	
	return count;
}

int main()
{
	string s;
	cout << "Vvedite stroku" << endl;
	setlocale(LC_ALL, " ");
	getline(cin, s);
	int count = bukovi(s);
	cout << count;
	return 0;
}
