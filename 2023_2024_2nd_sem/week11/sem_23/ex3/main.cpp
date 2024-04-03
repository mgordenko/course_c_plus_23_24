#include <iostream>
#include <stdexcept>
#include <string>

void processValue(int value) {
    if (value < 0) {
        throw std::runtime_error("Значение не должно быть отрицательным");
    } else if (value == 0) {
        throw std::invalid_argument("Значение не должно быть равно нулю");
    } else if (value > 100) {
        throw std::out_of_range("Значение слишком велико");
    } else {
        std::cout << "Значение в норме: " << value << std::endl;
    }
}
int main() {
    try {
        processValue(-1); 
    } catch (const std::invalid_argument& e) {
        std::cout << "invalid_argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cout << "out_of_range: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "exception: " << e.what() << std::endl;
    }
    return 0;
}
