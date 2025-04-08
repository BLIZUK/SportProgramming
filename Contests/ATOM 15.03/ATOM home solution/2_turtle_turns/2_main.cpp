#include <iostream>
#include <unordered_set>
#include <vector>


int main() {
    int n;
    std::cin >> n;
    std::vector<int> angles(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> angles[i];
    }

    std::unordered_set<int> current;
    current.insert(0);

    for (int angle : angles) {
        std::unordered_set<int> next_set;
        for (int rem : current) {
            int next_plus = (rem + angle) % 360;
            next_plus = (next_plus + 360) % 360;
            next_set.insert(next_plus);

            int next_minus = (rem - angle) % 360;
            next_minus = (next_minus + 360) % 360;
            next_set.insert(next_minus);
        }
        current = next_set;
    }

    std::cout << (current.count(0) ? "YES" : "NO") << std::endl;
    return 0;
}