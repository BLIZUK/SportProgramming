#include <iostream>


int counting()
{
	int a1, a2, n, progression;
	std::cin >> a1 >> a2 >> n;

	progression = a2 - a1;

	for (int i = 0; i < n - 1; i++)
	{
		a1 += progression;
	}

	return a1;
}


int main()
{
	std::cout << counting() << std::endl;
	return 0;
}