
// Вам дан словарь, состоящий из пар слов. 
// Каждое слово является синонимом к парному ему слову. 
// Все слова в словаре различны. Для каждого данного слова 
// определите его синоним.
// Для решения данной задачи используйте STL
// Формат ввода
// Программа получает на вход количество пар синонимов N (0 ≤ N ≤ 105). 
// Далее следует N строк, каждая строка содержит ровно два слова-синонима.
// Затем идет число Q (1 ≤ Q ≤ 105) — количество запросов к словарю. 
// Далее на каждой следующей из Q строк идет слово, к которому надо вывести
// синоним.
// Формат вывода
// Программа должна вывести синонимы к данным слову на отдельных строках.
// Пример
// Ввод Скопировать ввод	Вывод Скопировать вывод
// 3
// car plane
// mouse cat
// base stream
// 3
// plane
// stream
// base
// car
// base
// stream
#include <unordered_map>
#include <string>
#include <iostream>
#include <exception>
#include <string>
int main() {
    // map O(logn)
    // unordered_map O(1)
    int n;
    std::cin >> n;
    std::unordered_map<std::string, std::string> dictionary;
    std::string first, second;
    dictionary.reserve(2 * n);
    for (int i = 0; i < n; ++i) {
        std::cin >> first >> second;
        dictionary.emplace(first, second); // dict[first] = second
        dictionary.emplace(second, first);
    }
    int m;
    std::cin >> m;
    std::string word;
    for (int i = 0; i < m; ++i) {
        std::cin >> word;
        std::cout << dictionary[word] << '\n';
    }
    return 0;
}
