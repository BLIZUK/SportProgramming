/*
* Задача 2:
* Цены в шесторочке
*/

#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <limits>

using namespace std;

int main() {
    int count;
    cin >> count;

    unordered_map<string, int> products;

    for (size_t i = 0; i < count; i++) {
        string name;
        int price;
        cin >> name >> price;

        if (products.find(name) == products.end() || price < products[name]) {
            products[name] = price;
        }
    }

    // Выводим результаты
    cout << products.size() << endl; // Количество уникальных товаров

    for (const auto& pair : products) {
        cout << pair.first << " " << pair.second << endl;
    }

    return 0;
}
