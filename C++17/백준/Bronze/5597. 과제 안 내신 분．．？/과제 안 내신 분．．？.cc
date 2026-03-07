#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    std::vector<int> numLists(30);
    std::vector<int> missingLists(2);

    {
        int stNum;

        for (int i = 0; i < 28; ++i)
        {
            std::cin >> stNum;
            numLists[stNum - 1] = stNum;
        }
    }

    for (int i = 0; i < numLists.size(); ++i)
    {
        if (numLists[i] == 0)
        {
            if (missingLists[0] == 0) missingLists[0] = i + 1;
            else missingLists[1] = i + 1;
        }
    }

    std::cout << missingLists[0] << '\n'
              << missingLists[1] << '\n';

    return 0;
}