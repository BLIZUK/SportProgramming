#include <iostream>


int counter()
{
	int a, b, n;
	std::cin >> n >> a >> b;
	return a * b * n * 2;
}





int main()
{
	std::cout << counter() << std::endl;
	return 0;
}