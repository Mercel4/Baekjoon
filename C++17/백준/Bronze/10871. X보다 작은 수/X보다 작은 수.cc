#include <iostream>
#include <vector>

int main()
{
    int testCase;
    int overNum;

    std::cin >> testCase >> overNum;

    std::vector<int> numList(testCase);
    std::vector<int> overList;

    int askNum;

    for (int i = 0; i < testCase; i++)
    {
        std::cin >> askNum;

        if (askNum < overNum)
        {
            numList[i] = askNum;
        }
    }

    for (int i = 0; i < numList.size(); i++) {
        if (numList[i] != 0)
        {
            std::cout << numList[i] << " ";
        }
    }

    return 0;
}