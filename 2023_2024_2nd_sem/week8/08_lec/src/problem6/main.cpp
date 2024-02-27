#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    std::cout << "Top element of the stack: " << myStack.top() << std::endl;

    std::cout << "Is stack empty? " << (myStack.empty() ? "Yes" : "No") << std::endl;

    myStack.pop();

    std::cout << "Top element of the stack after pop: " << myStack.top() << std::endl;

    return 0;
}
