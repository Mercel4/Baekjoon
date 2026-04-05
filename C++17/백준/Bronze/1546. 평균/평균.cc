#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int testCase;
    double maxValue = 0;
    std::cin >> testCase;

    std::vector<double> oriScore(testCase);

    for (int i = 0; i < testCase; ++i) {
        std::cin >> oriScore[i];
        if (oriScore[i] > maxValue) {
            maxValue = oriScore[i];
        }
    }

    double sum = 0;
    for (int i = 0; i < testCase; ++i) {
        sum += (oriScore[i] / maxValue) * 100;
    }

    std::cout << sum / testCase << std::endl;

    return 0;
}