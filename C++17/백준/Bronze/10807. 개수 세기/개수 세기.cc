#include <iostream>
#include <vector>

int main()
{
    int testCase;
    int findNum;
    int numberOfFind = 0;

    std::cin >> testCase;

    std::vector<int> list_a(testCase);

    for (int i = 0; i < testCase; ++i)
    {
        int inputNum;

        std::cin >> inputNum;
        list_a[i] = inputNum;
    }

    std::cin >> findNum;

    for (int i = 0; i < testCase; ++i)
    {
        if (list_a[i] == findNum)
        {
            numberOfFind++;
        }
    }

    std::cout << numberOfFind << std::endl;

    return 0;
}