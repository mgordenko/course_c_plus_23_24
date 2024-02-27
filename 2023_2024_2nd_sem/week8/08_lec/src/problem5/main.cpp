#include <iostream>
#include <forward_list>

int main() {
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    std::cout << "Forward list elements: ";
    for (const auto& elem : myForwardList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "First element: " << myForwardList.front() << std::endl;

    std::cout << "Is forward list empty? " << (myForwardList.empty() ? "Yes" : "No") << std::endl;

    auto it = myForwardList.begin();
    ++it; 
    myForwardList.insert_after(it, 10);

    std::cout << "Forward list elements after insertion: ";
    for (const auto& elem : myForwardList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    myForwardList.erase_after(it);

    std::cout << "Forward list elements after erasure: ";
    for (const auto& elem : myForwardList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
