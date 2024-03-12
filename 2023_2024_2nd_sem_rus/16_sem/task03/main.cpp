/*
Реализуйте систему обработки заказов, которая проверяет 
корректность введенного количества товаров и их стоимости. 
Если количество товаров отрицательное или стоимость товара 
ниже допустимого предела, система должна генерировать исключения.

Требования к реализации:
Определение класса исключения: Создайте класс исключения 
OrderException, который наследуется от std::exception. 
Класс должен содержать два поля: сообщение об ошибке и код ошибки.
 Реализуйте конструктор, принимающий эти параметры, и методы для их 
 извлечения.

Функция обработки заказа: Реализуйте функцию processOrder, 
которая принимает количество товаров и их стоимость как аргументы. 
Функция должна проверять, что количество товаров не отрицательно 
 что стоимость товара не ниже минимально допустимой. В случае
  обнаружения ошибки, функция должна генерировать исключение 
  OrderException с соответствующим сообщением об ошибке и кодом ошибки.

Обработка исключений: В функции main, вызовите processOrder с
 различными параметрами для демонстрации работы системы. 
 Используйте блоки try-catch для обработки исключений, 
 генерируемых функцией processOrder. При перехвате исключения, 
  выводите информацию об ошибке и код ошибки.
*/

#include <iostream>
#include <exception>
#include <string>

class OrderException : public std::exception {
 private:
  std::string message;
  int errorCode;

 public:
  OrderException(const std::string& msg, int errCode) : message(msg), errorCode(errCode) {}
  const char* what() const noexcept override {
    return message.c_str();
  }
  int getErrorCode() const noexcept {
    return errorCode;
  }
};

void processOrder(int quantity, double price) {
  const double minPrice = 10.0;
  if (quantity < 0) {
    throw OrderException("Отрицательное количество  не допустимо", 100);
  } else if (price < minPrice) {
    throw OrderException("Стоимость товара ниже минимально допустимой", 101);
  }
  std::cout << "Заказ обработан успешно: количество товаров - " << quantity << ", стоимость за единицу - " << price << std::endl;
}

int main() {
  try {
    processOrder(-99, 12.0);
  } catch (const OrderException& e) {
    std::cout << "исключение: " << e.what() << "\nкод ошибки: " << e.getErrorCode() << std::endl;
  }

  try {
    processOrder(10, 5.0);
  } catch (const OrderException& e) {
    std::cout << "исключение: " << e.what() << "\nкод ошибки: " << e.getErrorCode() << std::endl;
  }
  return 0;
}