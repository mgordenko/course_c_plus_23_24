//
// Created by Майя Кораблина on 08/02/24.
//

#include <iostream>

int main()
{
    int day, month, year;
    std::cin >> day >> month >> year;

    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0) {
        arr[1] = 29;
    }
    if (month == 12 and day >= 30){
        std::cout << day + 2 - 31 << ' ' << 1 << ' ' << year + 1;
    }
    else if (day >= arr[month - 1] - 1) {
        std::cout << day + 2 - arr[month - 1] << ' ' << month + 1 << ' ' << year;
    }
    else {
        std::cout << day + 2 << ' ' << month << ' ' << year;
    }


    return 0;
}