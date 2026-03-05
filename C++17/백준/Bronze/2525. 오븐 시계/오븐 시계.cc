#include <iostream>

int main() {
    int hours, minutes, runningMinutes;

    std::cin >> hours >> minutes;
    std::cin >> runningMinutes;

    minutes += runningMinutes;

    while (minutes >= 60) {
        hours++;
        minutes -= 60;
    }
    hours = hours % 24;
    
    std::cout << hours << " " << minutes << std::endl;
}