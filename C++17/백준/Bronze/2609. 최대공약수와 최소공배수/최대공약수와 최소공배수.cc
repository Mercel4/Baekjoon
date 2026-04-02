#include <iostream>
#include <vector>

int main()
{
    int a, b, LCM, GCD;
    std::cin >> a >> b;

    for (int i = 1; i <= a && i <= b; ++i) { // a, b 중 작은 수까지 반복
        if (a % i == 0 && b % i == 0) { // i가 a와 b의 공약수인 경우
            GCD = i; // GCD를 i로 업데이트
        }
    }

    // a * b = GCD * LCM 이므로, LCM을 구하기 위해 GCD로 나눠줌
    LCM = (a * b) / GCD;

    std::cout << GCD << std::endl;
    std::cout << LCM << std::endl;

    return 0;
}