//
// Created by Майя Кораблина on 08/02/24.
//

#include "iostream"
#include <string>

bool check_password(std::string password) {
    int big = 0, small = 0, nums = 0, misc = 0;
    for (char c : password) {
        if (c < 33 or c > 127) return false;
        if (isupper(c)) big = 1;
        else if (islower(c)) small = 1;
        else if (isdigit(c)) nums = 1;
        else misc = 1;
    }
    if (big + small + nums + misc < 3) return false;
    else if (password.length() < 8 or password.length() > 14) return false;
    return true;
}

int main() {
    std::string password;
    std::cin >> password;
    if (check_password(password)) {
        std::cout << "YES";
    }
    else {
        std::cout << "NO";
    }

    return 0;
}