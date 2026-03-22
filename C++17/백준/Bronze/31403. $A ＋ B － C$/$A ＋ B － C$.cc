#include <iostream>
#include <string>

int main(void) {
    int a, b, c;
    std::string aS, bS, cS, abS;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    
    std::cout << a + b - c << std::endl;
    
    aS = std::to_string(a);
    bS = std::to_string(b);
    abS = aS + bS;
    a = std::stoi(abS);
    std::cout << a - c << std::endl;

}