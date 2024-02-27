#include <iostream>
#include <set>

int main() {
    std::set<int> mySet;

    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(20); // Duplicate element, won't be inserted

    std::cout << "Size of set: " << mySet.size() << std::endl;

    mySet.erase(20);

    std::cout << "Is 20 in set? " << (mySet.count(20) ? "Yes" : "No") << std::endl;

    return 0;
}
