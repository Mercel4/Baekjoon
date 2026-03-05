#include <iostream>
#include <algorithm>

int main() {
    int a, b, c, money;

    std::cin >> a >> b >> c;

    if (a == b && b == c) {
        money = 10000 + a * 1000;
    } else if (a == b) {
        money = 1000 + a * 100;
    } else if (a == c) {
        money = 1000 + a * 100;
    } else if (b == c) {
        money = 1000 + b * 100;
    } else {
        money = std::max({a, b, c}) * 100;
    }
    std::cout << money << std::endl;
    return 0;
}