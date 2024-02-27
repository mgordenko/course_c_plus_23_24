#include <iostream>
#include <map>

int main() {
    std::multimap<int, std::string> multimap;

    multimap.insert(std::make_pair(1, "apple"));
    multimap.insert(std::make_pair(2, "banana"));
    multimap.insert(std::make_pair(1, "orange"));

    std::cout << "Values with key 1: ";
    auto range = multimap.equal_range(1);
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << it->second << " ";
    }
    std::cout << std::endl;

    return 0;
}
