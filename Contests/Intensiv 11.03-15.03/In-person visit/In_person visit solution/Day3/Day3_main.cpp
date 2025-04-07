#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>


//--------------------------------------------------------------------------------
//Ќахождение максимальной заполненности
static void task4()
{
	size_t n, k, i;
	std::cin >> n >> k;
	std::vector<int> a(n);

	for (i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	sort(a.begin(), a.end());
	int ans = -1;
	int l = 1, r = 1e9;
	while (l <= r)
	{
		int mid = (l + r) >> 1;
		int cnt = 1;
		int pr = a[0];
		for (i = 0; i < n; i++)
		{
			if (a[i] - pr >= mid)
			{
				cnt++;
				pr = a[i];
			}
		}
		if (cnt >= k)
		{
			l = mid + 1;
			ans = mid;
		}
		else
		{
			r = mid - 1;
		}
	}

}
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
//Ѕинарный поиск с вещественными числами
static double f(double a, double b, double c, double d, double x)
{
	return a * x * x * x * b * x * x + c * x + d;
}

static void task3()
{
	const double eps = 1e-8;
	double a, b, c, d;
	std::cin >> a >> b >> c >> d;
	double l = -1000, r = 1000;
	for (size_t i = 0; i < 50; i++)
	{
		double mid = (l + r) / 2;
		double res = f(a, b, c, d, mid);
		if (res > -eps && res < eps)
		{
			std::cout << std::fixed << std::setprecision(9) << '\n' << mid;
		}
		else if (res > eps)
		{
			r = mid - eps;
		}
		else
		{
			l = mid + eps;
		}
	}
}
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
// —тандатрный бинарный поиск дл€ отсортированного списка.
void task2()
{
	size_t n, i;
	int x;
	std::cin >> n >> x;
	std::vector<int> arr(n);
	for (i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	int l = 0, r = n - 1, ans = -1;

	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (arr[mid] == x)
		{
			std::cout << "Yes\n" << mid;
			return;
		}
		if (arr[mid] < x)
		{
			ans = mid;
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
	std::cout << "No" << std::endl;
}
//--------------------------------------------------------------------------------


//--------------------------------------------------------------------------------
// ѕоиск нужного числа с помощью бинарного поиска в массиве из 100 элеметнов.
void task1()
{
	int l = 1, r = 100;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		std::cout << "? " << mid << std::endl;
		char c;
		std::cin >> c;
		if (c == '=')
		{
			std::cout << "! " << mid << std::endl;

		}
		else if (c == '<')
		{
			l = mid + 1;
		}
		else
		{
			r = mid - 1;
		}
	}
}
//--------------------------------------------------------------------------------


int main()
{
	task4();
	return 0;
}