#include <iostream>
#include <array>

int main() {
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    std::cout << "Array elements: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "First element: " << arr.front() << std::endl;
    std::cout << "Last element: " << arr.back() << std::endl;

    std::cout << "Is array empty? " << (arr.empty() ? "Yes" : "No") << std::endl;

    std::cout << "Number of elements in array: " << arr.size() << std::endl;

    arr.fill(0);

    std::cout << "Array elements after filling with 0s: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
