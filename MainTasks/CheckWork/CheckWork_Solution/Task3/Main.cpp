/*
* Задание 3:
* Организация турнира
*/

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> power(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> power[i];
    }

    // Сортируем массив (O(N log N))
    std::sort(power.begin(), power.end());

    int temp = 0;
    // Берем попарно минимальные элементы (O(N))
    for (int i = 0; i < N; i += 2) {
        temp += power[i + 1] - power[i];
    }

    std::cout << N / 2 << std::endl;
    std::cout << temp << std::endl;

    return 0;
}
