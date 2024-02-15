//
// Created by Майя Кораблина on 08/02/24.
//
#include "iostream"

std::string common_suffix(const std::string& a, const std::string& b){
    std::string ans = "";
    std::string ans_reversed = "";

    for (int i = 0; i < std::min(a.length(), b.length()); i++) {

        if (a[a.length() - 1 - i] == b[b.length() - 1 - i]) {
            ans += a[a.length() - 1 - i];
        }
        else {
            break;
        }
    }

    for (int j = ans.length() - 1; j >= 0; j--) {
        ans_reversed += ans[j];
    }


    return ans_reversed;
}

int main () {
    std::string a;
    std::string b;
    std::cin >> a >> b;

    std::cout << common_suffix(a, b);


    return 0;
}

