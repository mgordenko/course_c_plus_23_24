#include <iostream>

/*
You work as an analyst in a company that sells electronics. You are provided 
with monthly sales of products for a year in the form of a vector, where each 
element of the vector represents the sales amount for a month. Your task is 
to analyze the data and perform the following operations:

Find the total sales volume for the year.
Determine the month with the maximum sales volume. If there are multiple months 
with the maximum sales, output the first one.
Calculate the average monthly sales.
Determine whether the sales in each month exceed the average monthly sales. 
For each month, output true or false accordingly.
Find the number of months with sales below the average.

Input Data
Vector std::vector<int> sales = {12000, 15000, 13000, 19000, 17000, 16000, 
                                 18000, 21000, 20000, 17000, 22000, 19000};, 
where each element represents the sales amount for a month.

Tasks to Implement
Implement a function to calculate the total sales volume for the year.
Implement a function to find the month with the maximum sales volume.
Calculate the average monthly sales.
Determine whether the sales in each month exceed the average monthly sales, 
and output the corresponding true or false values.
Find the number of months with sales below the average.

Total sales volume for the year: 204000
Month with maximum sales volume: 11
Average monthly sales: 17000
Sales above average: false false false true true false true true true true true true
Number of months with sales below average: 3
*/

/*
#include <numeric>
#include <vector>
int totalSales(const std::vector<int> &sales) {
  int total = 0;
  for (int sale : sales) {
    total += sale;
  }
  // total = std::accumulate(sales.begin(), sales.end(), 0);
  return total;
}
int maxSalesMonth(const std::vector<int> &sales) {
  int maxIndex = 0;
  for (int i = 1; i < sales.size(); ++i) {
    if (sales[i] > sales[maxIndex]) {
      maxIndex = i;
    }
  }
  // auto it_max = std::max_element(sales.begin(), sales.end());
  // maxIndex = std::distance(sales.begin(), it_max);
  return maxIndex + 1;
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
  int count = 0;
  for (int sale : sales) {
    if (sale < average) {
      ++count;
    }
  }
  std::cout << count << std::endl;
  return 0;
}
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