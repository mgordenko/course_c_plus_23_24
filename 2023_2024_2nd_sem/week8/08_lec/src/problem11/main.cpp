#include <iostream>
#include <set>

int main() {
    std::multiset<int> myMultiset;

    myMultiset.insert(10);
    myMultiset.insert(20);
    myMultiset.insert(30);
    myMultiset.insert(20); // Allows duplicate elements

    std::cout << "Size of multiset: " << myMultiset.size() << std::endl;

    myMultiset.erase(20);

    std::cout << "Count of 20 in multiset: " << myMultiset.count(20) << std::endl;

    return 0;
}
