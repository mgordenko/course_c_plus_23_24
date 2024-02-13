//
// Created by Майя Кораблина on 08/02/24.
//
#include "iostream"

std::string plus_one(std::string n){
    for (int i = n.length() - 1; i >= 0; i--) {
        if (n[i] == '9' and i != 0) n[i] = '0';
        else if (n[i] == '9'){
            n[i] = '0';
            n = "1" + n;
        }
        else{
            n[i] += 1;
            break;
        }
    }
    return n;
}

int main(){
    std::string n;
    std::cin >> n;
    std::cout << plus_one(n);
    return 0;
}