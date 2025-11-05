#include <iostream>
#include <climits>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long min_cost = LLONG_MAX;

    // Перебираем возможные y (количество утяжелителей по 3 кг)
    // Достаточно перебрать 0..5, потому что далее ситуация повторяется
    for (long long y = 0; y <= 5; ++y) {
        long long rem = n - 3 * y;
        if (rem >= 0 && rem % 2 == 0) {
            long long x = rem / 2;
            min_cost = min(min_cost, x * a + y * b);
        }
    }

    // Также проверим случай, когда y близко к n/3 (максимальное y)
    for (long long y = n / 3; y >= n / 3 - 5; --y) {
        if (y < 0) continue;
        long long rem = n - 3 * y;
        if (rem >= 0 && rem % 2 == 0) {
            long long x = rem / 2;
            min_cost = min(min_cost, x * a + y * b);
        }
    }

    cout << min_cost << endl;

    return 0;
}