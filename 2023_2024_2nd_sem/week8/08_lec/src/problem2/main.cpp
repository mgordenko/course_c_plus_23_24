#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(5, 0);
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] = i + 1;
    }
    std::cout << "Vector elements: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "First element: " << vec.front() << std::endl;
    std::cout << "Last element: " << vec.back() << std::endl;

    std::cout << "Is vector empty? " << (vec.empty() ? "Yes" : "No") << std::endl;

    std::cout << "Number of elements in vector: " << vec.size() << std::endl;

    vec.push_back(6);

    std::cout << "Vector elements after adding 6: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    vec.pop_back();

    std::cout << "Vector elements after removing the last element: ";
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
