#include <iostream>
#include <list>

int main() {
    std::list<int> myList = {1, 2, 3, 4, 5};

    std::cout << "List elements: ";
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    std::cout << "First element: " << myList.front() << std::endl;
    std::cout << "Last element: " << myList.back() << std::endl;

    std::cout << "Is list empty? " << (myList.empty() ? "Yes" : "No") << std::endl;

    std::cout << "Number of elements in list: " << myList.size() << std::endl;

    myList.push_front(0);
    myList.push_back(6);

    std::cout << "List elements after adding 0 at the front and 6 at the back: ";
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    myList.pop_front();
    myList.pop_back();

    std::cout << "List elements after removing the first and last elements: ";
    for (const auto& elem : myList) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}