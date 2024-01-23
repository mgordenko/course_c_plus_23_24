#include <iostream>

int main()
{
    int n = 5;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;
    }

    std::cout << "Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int sum = 0;
    int* ptr = arr;
    for (int i = 0; i < n; i++) {
        sum += *ptr;
        ptr++;
    }

    std::cout << "Sums: " << sum << std::endl;

    delete[] arr;

    return 0;
}
