#include <iostream>
#include <string>

int main() {
    int testCases, sum = 0;
    std::cin >> testCases;

    std::string input;
    std::cin >> input;

    for (int i = 0; i <testCases; i++) {
        sum += input[i] - '0';
    }
    
    std::cout << sum << std::endl;
    return 0;
}