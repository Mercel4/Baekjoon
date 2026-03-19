#include <iostream>
#include <string>

int main() {
    std::string word;
    std::cin >> word;

    for (char c = 'a'; c <= 'z'; ++c) {

        int pos = word.find(c);

        if (pos != std::string::npos) {
            std::cout << pos << " ";
        } else {
            std::cout << -1 << " ";
        }
    }

    return 0;
}