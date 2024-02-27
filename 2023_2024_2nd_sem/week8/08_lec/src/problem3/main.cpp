#include <iostream>
#include <deque>

int main() {
    std::deque<int> deq = {1, 2, 3, 4, 5};

    std::cout << "Deque elements: ";
    for (int i = 0; i < deq.size(); ++i) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "First element: " << deq.front() << std::endl;
    std::cout << "Last element: " << deq.back() << std::endl;

    std::cout << "Is deque empty? " << (deq.empty() ? "Yes" : "No") << std::endl;

    std::cout << "Number of elements in deque: " << deq.size() << std::endl;

    deq.push_front(0);
    deq.push_back(6);

    std::cout << "Deque elements after adding 0 at the front and 6 at the back: ";
    for (int i = 0; i < deq.size(); ++i) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;

    deq.pop_front();
    deq.pop_back();

    std::cout << "Deque elements after removing the first and last elements: ";
    for (int i = 0; i < deq.size(); ++i) {
        std::cout << deq[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
