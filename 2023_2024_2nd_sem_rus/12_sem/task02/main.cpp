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
Реализуйте функцию для расчета общего объема продаж за год. (accumulate)
Реализуйте функцию для нахождения месяца с максимальным объемом продаж. (distance, max_element)
Рассчитайте среднемесячные продажи.
Определите для каждого месяца, превышают ли его продажи среднемесячные продажи, и выведите соответствующие значения true или false.
Найдите количество месяцев с продажами ниже среднего (count_if)

Общий объем продаж за год: 204000
Месяц с максимальным объемом продаж: 11
Среднемесячные продажи: 17000
Продажи выше среднего: false false false true true false true true true true true true
Количество месяцев с продажами ниже среднего: 3

*/

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

// https://en.cppreference.com/w/cpp/algorithm/accumulate
int totalSales(const std::vector<int> &sales) {
  return std::accumulate(sales.begin(), sales.end(), 0);
}
// https://en.cppreference.com/w/cpp/algorithm/max_element
// https://en.cppreference.com/w/cpp/iterator/distance
int maxSalesMonth(const std::vector<int> &sales) {
  auto max_sales_it = std::max_element(sales.begin(), sales.end());
  int max_sales_month = std::distance(sales.begin(), max_sales_it) + 1;
  return max_sales_month;
}
int main() {
  std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000,
                            18000, 21000, 20000, 17000, 22000, 19000};
  int total = totalSales(sales);
  std::cout << "total: " << total << std::endl;
  int maxMonth = maxSalesMonth(sales);
  std::cout << "max: " << maxMonth << std::endl;
  int average = total / sales.size();
  std::cout << average << std::endl;
  for (int sale : sales) {
    std::cout << (sale > average ? "true " : "false ");
  }
  std::cout << std::endl;
  // https://en.cppreference.com/w/cpp/algorithm/count
  int below_average_months =
      std::count_if(sales.begin(), sales.end(),
                    [average](int sale) { return sale < average; });

  std::cout << below_average_months;
  return 0;
}