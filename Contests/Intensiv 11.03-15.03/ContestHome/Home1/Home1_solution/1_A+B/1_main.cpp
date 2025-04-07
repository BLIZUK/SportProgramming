#include <iostream>

int counting() {
    int a, b, res;
    std::cin >> a >> b;


    __asm {
        mov eax, a
        add eax, b
        mov res, eax
    }

    return res;
}

int main() {
    std::cout << counting() << std::endl;
    return 0;
}