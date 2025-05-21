#include <iostream>
#include <vector>
#include <math.h>


int check(size_t n)
{
	size_t i, j, count = 0, start = std::pow(10, n - 1), end = std::pow(10, n);
	std::vector<size_t> nums(end);

	for (i = start; i < end; i++)
	{
		nums[i] = i;
	}

	for (i = 0; i < end; i++)
	{
		size_t value = nums[i];
		if (n == 1) return 9;
		size_t checked = 0;
		for (j = 0; j < n - 1; j++)
		{
			int last = value % 10;
			if (!(std::abs(last - int((value / 10) % 10)) <= 1))
			{
				checked++;
				break;
			}
			else
			{
				value = value / 10;
			}
		
		}
		if (checked == 0) count++;
	}
	return count;
}


int main()
{
	size_t n;
	std::cin >> n;
	std:: cout << check(n);




	return 0;
}