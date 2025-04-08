#include <iostream>
#include <vector>
#include <algorithm>
#include <set>



static std::vector<int> selection(size_t a, size_t b, size_t c) {
    std::vector<int> digits = { static_cast<int>(a), static_cast<int>(b), static_cast<int>(c) };
    sort(digits.begin(), digits.end());
    std::set<int> unique_numbers;

    do {
        int number = digits[0] * 100 + digits[1] * 10 + digits[2];
        unique_numbers.insert(number);
    } while (next_permutation(digits.begin(), digits.end()));

    return std::vector<int>(unique_numbers.begin(), unique_numbers.end());
}

int main() {
    size_t a, b, c;
    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        std::cout << a << b << c;
    }
    else {
        std::vector<int> result = selection(a, b, c);
        for (int num : result) {
            std::cout << num << " ";
        }
    }

    return 0;
}