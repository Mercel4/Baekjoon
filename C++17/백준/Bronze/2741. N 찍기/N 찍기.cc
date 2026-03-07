#include <iostream>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int testCase = 0;
    std::cin >> testCase;

    for (int i = 0; i < testCase; ++i) {
        std::cout << i + 1 << "\n";
    }

    return 0;
}