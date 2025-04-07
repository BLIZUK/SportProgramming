#include <iostream>
#include "Repos.h"


void var1()
{
	int n;
	DNA_task task;
	std::cin >> n;
	std::cin.ignore();

	std::string input;
	getline(std::cin, input);

	task.MS.filling(input);

	task.MS.print();
}


int main()
{
	var1();
	return 0;
}