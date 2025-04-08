#include <iostream>
#include <vector>


static std::vector<int> PrefixSum(const std::vector<int>& arr, size_t n)
{
	std::vector<int> pref(n);
	pref[0] = arr[0];

	for (size_t i = 1; i < n; i++)
	{
		pref[i] = pref[i - 1] + arr[i];
	}

	return pref;

}


static int SumSegment(const std::vector<int>& pref, size_t l, size_t r)
{
	if (l == 0)
	{
		return pref[r];
	}

	return pref[r] - pref[l - 1];
}


int main()
{
	size_t n, q, i, l, r;
	std::cin >> n;
	std::vector<int> arr(n);

	for (i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	std::vector<int> prefarr = PrefixSum(arr, n);

	std::cin >> q;

	for (i = 0; i < q; i++)
	{
		std::cin >> l >> r;
		std::cout << SumSegment(prefarr, l - 1, r - 1) << std::endl;
	}

	return 0;
}