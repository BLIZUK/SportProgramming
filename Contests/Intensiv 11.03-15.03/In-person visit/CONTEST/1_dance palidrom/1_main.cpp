#include <iostream>
#include <vector>


int pars(std::vector<int>& A, size_t n, std::vector<int>& B)
{
	size_t l = 0, r = A.size() - 1;
	int cost = 0;

	if (A.size() % 2 == 0)
	{
		while (l < r)
		{
			if (A[l] != A[r])
			{
				if (A[l] == 2)
				{
					cost += B[A[r]];
					l++; r--;
					continue;
				}
				if (A[r] == 2)
				{
					cost += B[A[l]];
					l++; r--;
					continue;
				}
				return -1;
			}
			if (A[l] == 2 && A[r] == 2)
			{
				l++; r--;
				cost += 2 * (std::min(B[0], B[1]));
				continue;
			}
			l++; r--;
		}
		return cost;
	}



	while (l <= r)
	{
		if (l == r && A[l] == 2)
		{
			cost += std::min(B[0], B[1]);
			l++; r--;
			continue;
		}
		if (A[l] != A[r])
		{
			if (A[l] == 2)
			{
				cost += B[A[r]];
				l++; r--;
				continue;
			}
			if (A[r] == 2)
			{
				cost += B[A[l]];
				l++; r--;
				continue;
			}
			return -1;
		}
		if (A[l] == 2 && A[r] == 2)
		{
			l++; r--;
			cost += 2 * (std::min(B[0], B[1]));
			continue;
		}
		l++; r--;
	}
	return cost;
}


void task1()
{
	size_t i, n;

	std::vector<int> B(2);

	std::cin >> n >> B[0] >> B[1];

	std::vector<int> A(n);

	for (i = 0; i < n; i++)
	{
		std::cin >> A[i];
	}

	std::cout << pars(A, n, B);
}


void task2()
{

}


int main()
{
	task1();
	return 0;

}
/* Thu Mar 13 2025 17:40:07 GMT+0300 (Moscow Standard Time) */
