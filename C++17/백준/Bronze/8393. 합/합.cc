#include <iostream>

int main()
{
    int number, sum = 0;

    std::cin >> number;

    for (int i = 1; i <= number; ++i)
    {
        sum += i;
    }

    std::cout << sum << std::endl;

    return 0;
}