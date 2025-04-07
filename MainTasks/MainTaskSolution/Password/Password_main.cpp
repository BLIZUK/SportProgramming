/*

 Зачада - Украденный пароль


 ---> Решена.

*/



#include <iostream>
#include <string>


using namespace std;


string process()
{
	size_t len_pas;
	cin >> len_pas;
	cin.ignore();
	string letters, pas;
	getline(cin, letters);
	for (int i = 0; i < len_pas; i++)
	{
		char letter = letters[i];
		if (letter == '<' && !pas.empty())
		{
			pas.pop_back();
			continue;
		}
		if (letter != '<') pas.push_back(letter);


	}
	return pas;
}


int main()
{
	cout << process();
	return 0;
}