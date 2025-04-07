#include <iostream>


int counting(int n, int k, int* arr)
{
	int count = 0;
	for (int i = 0; i < k; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[j] == 0) continue;
			arr[j]--;
			count++;
		}
	}
	return count;
}


int input_output()
{
	int n, k;

	std::cin >> n;

	int* schools = new int[n];

	for (int i = 0; i < n; i++)
	{
		int x;
		std::cin >> x;
		schools[i] = x;
	}

	std::cin >> k;

	return counting(n, k, schools);
}


int main()
{
	std::cout << input_output() << std::endl;
	return 0;
}