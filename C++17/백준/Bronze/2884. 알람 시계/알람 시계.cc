#include <iostream>

int main() {
    int hours, minutes;

    std::cin >> hours >> minutes;

    minutes -= 45;
    if (minutes < 0) {
        minutes += 60;
        hours -= 1;
    }
    
    if (hours < 0) {
        hours += 24;
    }

    std::cout << hours << " " << minutes << std::endl;
    return 0;
}