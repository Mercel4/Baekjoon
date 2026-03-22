#include <iostream>
#include <string>

int main(void) {
    std::string word;
    int wordPos;

    std::cin >> word;
    std::cin >> wordPos;

    std::cout << word[wordPos - 1] << std::endl;
    return 0;
}