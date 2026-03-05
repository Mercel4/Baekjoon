#include <iostream>

int main()
{
    int priceInRecipt, numberOfItems;
    int priceOfItems, numberOfItem;

    std::cin >> priceInRecipt;
    std::cin >> numberOfItems;

    for (int i = 0; i < numberOfItems; i++){
        std::cin >> priceOfItems >> numberOfItem;
        priceInRecipt -= priceOfItems * numberOfItem;
    }

    if (priceInRecipt == 0){
        std::cout << "Yes";
    } else {
        std::cout << "No";
    }

    return 0;
}