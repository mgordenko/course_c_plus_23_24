#include <iostream>
#include <queue>

int main() {
    std::queue<int> myQueue;

    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);

    std::cout << "Front element of the queue: " << myQueue.front() << std::endl;
    std::cout << "Back element of the queue: " << myQueue.back() << std::endl;

    myQueue.pop();

    std::cout << "Front element of the queue after pop: " << myQueue.front() << std::endl;

    return 0;
}
