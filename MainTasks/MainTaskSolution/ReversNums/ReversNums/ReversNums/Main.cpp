#include <iostream>
#include <tuple>

// Возвращает НОД(a, b) и коэффициенты x, y
std::tuple<int, int, int> extended_gcd(int a, int b)
{
    if (a == 0)
    {
        return { b, 0, 1 };
    }

    auto [gcd, x1, y1] = extended_gcd(b % a, a);
    int x = y1 - (b / a) * x1;
    int y = x1;
    return { gcd, x, y };
}

// Находит обратный элемент a-1 mod m
int mod_inverse(int a, int m)
{
    auto [gcd, x, y] = extended_gcd(a, m);
    return (x % m + m) % m;
}

int main() {
    int a, m;
    std::cin >> a >> m;
    
    int inv = mod_inverse(a, m);
    std::cout << inv;

    return 0;
}