#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers(8);
    for (int i = 0; i < 8; ++i) {
        std::cin >> numbers[i];
    }

    bool ascending = true;
    bool descending = true;

    for (int i = 0; i < 8; ++i) {
        if (numbers[i] != i + 1) ascending = false;
        
        if (numbers[i] != 8 - i) descending = false;
    }

    if (ascending) std::cout << "ascending" << std::endl;
    else if (descending) std::cout << "descending" << std::endl;
    else std::cout << "mixed" << std::endl;

    return 0;
}