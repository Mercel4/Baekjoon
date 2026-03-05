#include <iostream>

int main()
{
    int testCase;
    std::cin >> testCase;

    for (int i = 0; i < testCase; ++i)
    {
        int a, b;
        std::cin >> a >> b;

        std::cout << a + b << std::endl;
    }

    return 0;
}