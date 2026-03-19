#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

int main() {
    while (true) {
        int side[3];
        std::cin >> side[0] >> side[1] >> side[2];

        if (side[0] == 0 && side[1] == 0 && side[2] == 0) {
            break;
        }

        std::sort(side, side + 3);

        if (std::pow(side[0], 2) + std::pow(side[1], 2) == std::pow(side[2], 2)) {
            std::cout << "right" << std::endl;
        } else {
            std::cout << "wrong" << std::endl;
        }
    }
}