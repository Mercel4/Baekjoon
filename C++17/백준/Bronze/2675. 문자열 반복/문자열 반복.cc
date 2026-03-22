#include <iostream>
#include <string>

int main(void) {
    int testCase, n;
    std::string s;

    std::cin >> testCase;

    for (int i = 0; i < testCase; ++i) {
        std::cin >> n >> s;

        for (int j = 0; j < s.length(); ++j) {
            for (int k = 0; k < n; ++k) {
                std::cout << s[j];
            }
        }
        std::cout << std::endl;
    }

    return 0;
}