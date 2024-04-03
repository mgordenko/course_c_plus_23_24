#include <iostream>
#include <exception>
#include <string>

class MyCustomException : public std::exception {
private:
    std::string message; 
    int errorCode; 

public:
    MyCustomException(const std::string& msg, int errCode) : 
    message(std::move(msg)), errorCode(errCode) {}

    const char* what() const noexcept override {
        return message.c_str();
    }

    int getErrorCode() const noexcept {
        return errorCode;
    }
};

void riskyFunction(int value) {
    if (value < 0) {
        throw MyCustomException("Отрицательное значение не допустимо", 100);
    } else if (value > 100) {
        throw MyCustomException("Значение превышает допустимый диапазон", 101);
    }
    std::cout << "Значение в пределах допустимого диапазона: " << value << std::endl;
}

int main() {
    try {
        riskyFunction(-1); 
    } catch (const MyCustomException& e) {
        std::cout << "Произошло исключение: " << e.what() << "\nКод ошибки: " << e.getErrorCode() << std::endl;
    }

    try {
        riskyFunction(150); 
    } catch (const MyCustomException& e) {
        std::cout << "Произошло исключение: " << e.what() << "\nКод ошибки: " << e.getErrorCode() << std::endl;
    }

    return 0;
}
