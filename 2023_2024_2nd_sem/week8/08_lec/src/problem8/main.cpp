#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> dictionary;

    dictionary["apple"] = 10;
    dictionary["banana"] = 20;
    dictionary["orange"] = 30;

    std::cout << "Value of 'apple': " << dictionary["apple"] << std::endl;

    dictionary.erase("banana");

    std::cout << "Is 'banana' in dictionary? " << (dictionary.count("banana") ? "Yes" : "No") << std::endl;

    return 0;
}
