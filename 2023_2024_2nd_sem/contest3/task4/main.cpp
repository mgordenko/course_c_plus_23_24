//
// Created by Майя Кораблина on 08/02/24.
//

#include "iostream"


std::string join(const std::vector<std::string>& tokens, char delimiter) {
    std::string ans = "";
    for (int i = 0; i < tokens.size(); i++) {
        if (i == tokens.size()-1) ans += tokens[i];
        else ans += tokens[i] + delimiter;
    }
    return ans;
}
