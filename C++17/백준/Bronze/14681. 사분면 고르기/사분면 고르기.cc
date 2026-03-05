#include <iostream>

int main() {
    int xPosition;
    int yPosition;

    std::cin >> xPosition;
    std::cin >> yPosition;

    if (xPosition > 0 && yPosition > 0) {
        std::cout << "1" << std::endl;
    } else if (xPosition < 0 && yPosition > 0) {
        std::cout << "2" << std::endl;
    } else if (xPosition < 0 && yPosition < 0) {
        std::cout << "3" << std::endl;
    } else if (xPosition > 0 && yPosition < 0) {
        std::cout << "4" << std::endl;
    }

    return 0;
}