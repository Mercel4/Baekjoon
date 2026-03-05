#include <iostream>

int main()
{
    int byteNum;

    std::cin >> byteNum;

    for (int i = 0; i < byteNum / 4; i++){
        std::cout << "long ";
    }
    std::cout << "int";

    return 0;
}