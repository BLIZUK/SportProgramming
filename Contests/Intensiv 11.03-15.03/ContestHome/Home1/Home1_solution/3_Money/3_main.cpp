#include <iostream>


int counter(int* arr, int size)
{
	int check0 = 0, check1 = 0, count = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			check0++;
			continue;
		}
		check1++;
	}
	if (check0 > check1) {


		for (int j = 0; j < size; j++)
		{
			if (arr[j] == 1)
			{
				arr[j] = 0;
				count++;
			}
		}
		return count;
	}
	for (int j = 0; j < size; j++)
	{
		if (arr[j] == 0)
		{
			arr[j] = 1;
			count++;
		}
	}
	return count;
}


int input_output()
{
	int count, res;
	std::cin >> count;
	int* arr = new int[count];

	for (int i = 0; i < count; i++)
	{
		int x;
		std::cin >> x;
		arr[i] = x;
	}

	res = counter(arr, count);

	delete[] arr;

	return res;
}


int main()
{
	std::cout << input_output() << std::endl;
	return 0;
}