#include <iostream>

int main() {
    int n = 3, m = 4;
    int** arr = new int*[n];
    // link1 link2 link3
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
        for (int j = 0; j < m; j++) { 
            arr[i][j] = i + j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            std::cout << arr[i][j] << " ";
        }
        std::cout << '\n';
    }
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;
}