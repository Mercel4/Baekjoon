#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int testCases;
    std::cin >> testCases;
    std::vector<int> numLists(testCases);

    {
        int inputNum;
        for (int i = 0; i < testCases; ++i) {
            std::cin >> inputNum;
            numLists[i] = inputNum;
        }
    }

    auto minNum = std::min_element(numLists.begin(), numLists.end());
    std::cout << *minNum << " ";

    auto maxNum = std::max_element(numLists.begin(), numLists.end());
    std::cout << *maxNum << "\n";
    
    return 0;
}