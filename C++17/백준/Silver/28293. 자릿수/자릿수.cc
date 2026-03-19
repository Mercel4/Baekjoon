#include <iostream>
#include <cmath>

int main() {
    int a, b;

    std::cin >> a >> b;

    double log_value = b * std::log10(a);

    int num_digits = static_cast<int>(std::floor(log_value)) + 1;

    std::cout << num_digits << std::endl;

    return 0;
}