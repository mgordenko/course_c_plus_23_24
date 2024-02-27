#include <iostream>

/*
Представим, что вы проводите опрос среди жителей города на тему 
"Ваше любимое время года". Ответы собираются в виде строки, где 
каждая буква обозначает выбор респондента:

W для зимы (Winter),
S для весны (Spring),
U для лета (Summer), 
A для осени (Autumn).
Ваша задача — проанализировать результаты опроса, используя 
контейнер std::vector<char> для хранения ответов и алгоритмы STL 
для их обработки.

Задачи для выполнения:
- Заполните вектор std::vector<char> responses результатами опроса.
- Используйте std::accumulate для подсчета общего количества ответов.
- Найдите наиболее популярное время года с помощью комбинации 
std::count_if и сравнения результатов.
- Используйте std::find_if для поиска первого ответа, 
который выбрал лето (U).
Выведите полученные результаты: общее количество ответов,
 наиболее и наименее популярные времена года, позицию первого 
 ответа, выбравшего лето.
*/

#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>

int main() {
  std::vector<char> responses = {'W', 'S', 'U', 'A', 'W', 'S', 'U',
                                 'A', 'S', 'U', 'A', 'W', 'S', 'U', 'A', 'W'};

  int total_responses = responses.size();

  std::map<char, int> counts;// ключ и значение (first, second)
  for (char season : {'W', 'S', 'U', 'A'}) {
    counts[season] = std::count(responses.begin(), responses.end(), season);
  }

  auto most_popular = *std::max_element(counts.begin(), counts.end(),
                                        [](const auto &a, const auto &b) {
                                          return a.second < b.second;
                                        });
  auto least_popular = *std::min_element(counts.begin(), counts.end(),
                                         [](const auto &a, const auto &b) {
                                           return a.second < b.second;
                                         });

  auto first_summer = std::find(responses.begin(), responses.end(), 'U') - responses.begin() + 1;

  std::cout << "Общее количество ответов: " << total_responses << std::endl;
  std::cout << "Наиболее популярное время года: " << most_popular.first << " с " << most_popular.second << " голосами" << std::endl;
  std::cout << "Наименее популярное время года: " << least_popular.first << " с " << least_popular.second << " голосами" << std::endl;
  std::cout << "Первый ответ, выбравший лето, находится на позиции: " << first_summer << std::endl;

  return 0;
}
