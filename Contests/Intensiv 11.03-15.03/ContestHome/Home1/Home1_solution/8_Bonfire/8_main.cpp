#include <iostream>
#include <vector>

using namespace std;

static bool checking(int n, int m, const vector<int>& a)
{
    int sum = 0;
    int max_a = 0;

    for (int num : a)
    {
        sum += num;
        max_a = std::max(max_a, num);
    }

    int max_time = sum - (n - 1);
    return (m >= max_a && m <= max_time);
}

static string input_output()
{
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }

    return checking(n, m, a) ? "yes" : "no";
}

int main()
{
    cout << input_output();
    return 0;
}