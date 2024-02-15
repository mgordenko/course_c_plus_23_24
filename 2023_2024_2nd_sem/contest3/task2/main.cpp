//
// Created by Майя Кораблина on 08/02/24.
//

#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int m;
    int ans[n];
    for (int i = 1; i <= n; i++) {
        std::cin >> m;
        ans[m - 1] = i;
    }
    for (int j : ans){
        std::cout << j << " ";
    }

    return 0;
}
