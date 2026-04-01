#include <iostream>
#include <vector>

int main()
{
    int a, b, c, mul;
    std::vector<std::string> v(10);
    std::vector<std::string> v2{"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    mul = a * b * c;
    std::string mul_str = std::to_string(mul);

    for (int i = 0; i < mul_str.size(); ++i) {
        for (int j = 0; j < v2.size(); ++j) {
            if (mul_str[i] == v2[j][0]) {
                v[j] += mul_str[i];
            }
        }
    }

    for (int i = 0; i < v.size(); ++i) {
        std::cout << v[i].size() << std::endl;
    }
    return 0;
}