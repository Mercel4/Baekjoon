#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int testCases;
    std::cin >> testCases;

    for (int i = 0; i < testCases; ++i)
    {
        int a, b;
        std::cin >> a >> b;

        std::cout << a + b << "\n";
    }
    
    return 0;
}