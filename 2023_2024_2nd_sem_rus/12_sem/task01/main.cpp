#include <iostream>

/*
Вы работаете аналитиком в компании, которая занимается продажей электроники. 
Вам предоставлены ежемесячные продажи товаров за год в виде вектора, где каждый 
элемент вектора представляет собой сумму продаж за месяц. Ваша задача состоит 
в том, чтобы проанализировать данные и выполнить следующие операции:

Найти общий объем продаж за год.
Определить месяц с максимальным объемом продаж. Если таких месяцев несколько, вывести 
первый из них.
Рассчитать среднемесячные продажи.
Определить, превышают ли продажи в каждом месяце среднемесячные продажи. 
Для каждого месяца вывести true или false.
Найти количество месяцев с продажами ниже среднего.
Входные данные
Вектор std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000, 18000, 21000, 20000, 17000, 22000, 19000};, 
где каждый элемент представляет собой сумму продаж за месяц.

Задачи для выполнения
Реализуйте функцию для расчета общего объема продаж за год.
Реализуйте функцию для нахождения месяца с максимальным объемом продаж.
Рассчитайте среднемесячные продажи.
Определите для каждого месяца, превышают ли его продажи среднемесячные продажи, и выведите соответствующие значения true или false.
Найдите количество месяцев с продажами ниже среднего.

Общий объем продаж за год: 209000
Месяц с максимальным объемом продаж: 11
Среднемесячные продажи: 17000
Продажи выше среднего: false false false true true false true true true true true true
Количество месяцев с продажами ниже среднего: 3

*/

#include <iostream>
#include <vector>

int totalSales(const std::vector<int> &sales) {
  int total = 0;
  for (int sale : sales) {
    total += sale;
  }
  return total;
}
int totalSales(std::vector<int>::iterator b, std::vector<int>::iterator e) {
  int total = 0;
  for (auto it = b; it != e; ++it) {
    total += *it;
  }
  return total;
}
int maxSalesMonth(const std::vector<int> &sales) {
  int maxIndex = 0;
  for (int i = 1; i < sales.size(); ++i) {
    if (sales[i] > sales[maxIndex]) {
      maxIndex = i;
    }
  }
  return maxIndex + 1;
}
int main() {
  std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000,
                            18000, 21000, 20000, 17000, 22000, 19000};
  int total = totalSales(sales);
  total = totalSales(sales.begin(), sales.end());
  std::cout << "total: " << total << std::endl;

  int maxMonth = maxSalesMonth(sales);
  std::cout << "max: " << maxMonth << std::endl;

  int average = total / sales.size();
  std::cout << average << std::endl;

  for (int sale : sales) {
    std::cout << (sale > average ? "true " : "false ");
  }
  std::cout << std::endl;

  for (int sale : sales) {
    if (sale < average) {
      std::cout << false;
    } else {
      std::cout << true;
    }
  }

  return 0;
}