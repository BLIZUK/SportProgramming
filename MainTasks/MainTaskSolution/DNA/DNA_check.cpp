/*
Задача - Реконструкция ДНК

		--> Так и не решена.

*/


#include <sstream>
#include <string>
#include <iostream>
#include <list>
#include <vector>


using namespace std;


// Разбивка строк по пробелу
static void split(const string& input, list<string>& words)
{
	istringstream iss(input);
	//vector<string> words;
	string word;

	while (iss >> word)
	{
		words.push_back(word);
	}

}


static void proces()
{
	int N;
	cin >> N;
	cin.ignore();

	string input;
	getline(cin, input);

	list<string> words;
	split(input, words);

	vector<list<string>::iterator> pointers;
	for (auto it = words.begin(); it != words.end(); ++it)
	{
		pointers.push_back(it);
	}


	for (int i = 0; i < N - 1; i++)
	{
		int a, b;
		cin >> a >> b;
		--a;
		--b;

		*(pointers[b]) += *(pointers[a]);

		words.erase(pointers[a]);
		pointers[a] = list<string>::iterator();
	}

	for (const auto word : words)
	{
		cout << word << endl;
	}
}


int _main()
{
	proces();
	return 0;
}