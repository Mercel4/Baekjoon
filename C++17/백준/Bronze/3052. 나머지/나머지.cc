#include <iostream>
#include <set>

int main() {
    std::set<int> remainders;
    int input;

    for (int i = 0; i < 10; ++i) {
        std::cin >> input;
        remainders.insert(input % 42);
    }

    std::cout << remainders.size() << std::endl;
    return 0;
}