#include <fstream>
#include <iostream>
#include <vector>
/*
The C++ Standard Template Library (STL) provides a variety of algorithms for searching in containers. Here are some of the most commonly used search methods and their descriptions:

Non-modifying search algorithms
std::find
Finds the first element equal to a given value.
Usage example: std::find(container.begin(), container.end(), value).
std::find_if
Finds the first element for which the predicate returns true.
Usage example: std::find_if(container.begin(), container.end(), predicate).
std::find_if_not
Finds the first element for which the predicate returns false.
Usage example: std::find_if_not(container.begin(), container.end(), predicate).
std::find_end
Finds the last occurrence of a subsequence in the range.
Usage example: std::find_end(container.begin(), container.end(), subsequence.begin(), subsequence.end()).
std::find_first_of
Finds the first element that matches any of the elements in another range.
Usage example: std::find_first_of(container.begin(), container.end(), candidates.begin(), candidates.end()).
std::adjacent_find
Finds the first pair of adjacent elements that satisfy a given criterion.
Usage example: std::adjacent_find(container.begin(), container.end()) or std::adjacent_find(container.begin(), container.end(), binary_predicate).
Counting algorithms
std::count
Counts the elements equal to a given value.
Usage example: std::count(container.begin(), container.end(), value).
std::count_if
Counts the elements that satisfy a given predicate.
Usage example: std::count_if(container.begin(), container.end(), predicate).
Range search algorithms
std::search
Finds the first occurrence of a subsequence in the range.
Usage example: std::search(container.begin(), container.end(), subsequence.begin(), subsequence.end()).
std::search_n
Finds the first occurrence of a sequence consisting of n consecutive elements equal to a given value.
Usage example: std::search_n(container.begin(), container.end(), count, value).
Binary search algorithms (require prior sorting)
std::lower_bound
Returns an iterator to the first element not less than a given value.
Usage example: std::lower_bound(sorted_container.begin(), sorted_container.end(), value).
std::upper_bound
Returns an iterator to the first element greater than a given value.
Usage example: std::upper_bound(sorted_container.begin(), sorted_container.end(), value).
std::equal_range
Returns a pair of iterators pointing to the beginning and end of a range of elements equal to a given value.
Usage example: std::equal_range(sorted_container.begin(), sorted_container.end(), value).
std::binary_search
Checks whether a sorted range contains a given value.
Usage example: std::binary_search(sorted_container.begin(), sorted_container.end(), value).
*/
#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5, 5, 6};
  std::vector<int> sub = {3, 4};
  std::vector<int> candidates = {4, 5, 6};

  // std::find
  auto it_find = std::find(v.begin(), v.end(), 3);
  if (it_find != v.end()) {
    std::cout << "Found 3 at position: " << std::distance(v.begin(), it_find) << std::endl;
  }

  // std::find_if
  auto it_find_if = std::find_if(v.begin(), v.end(), [](int i) { return i % 2 == 0; });
  std::cout << "First even number: " << *it_find_if << std::endl;

  // std::find_if_not
  auto it_find_if_not = std::find_if_not(v.begin(), v.end(), [](int i) { return i % 2 == 0; });
  std::cout << "First odd number: " << *it_find_if_not << std::endl;

  // std::find_end
  auto it_find_end = std::find_end(v.begin(), v.end(), sub.begin(), sub.end());
  std::cout << "Subsequence {3, 4} found ending at position: " << std::distance(v.begin(), it_find_end) + sub.size() - 1 << std::endl;

  // std::find_first_of
  auto it_find_first_of = std::find_first_of(v.begin(), v.end(), candidates.begin(), candidates.end());
  std::cout << "First of candidates found: " << *it_find_first_of << std::endl;

  // std::adjacent_find
  auto it_adjacent_find = std::adjacent_find(v.begin(), v.end());
  std::cout << "First pair of adjacent elements: " << *it_adjacent_find << " and " << *(it_adjacent_find + 1) << std::endl;

  // std::count
  int cnt = std::count(v.begin(), v.end(), 5);
  std::cout << "Number 5 appears " << cnt << " times" << std::endl;

  // std::count_if
  int cnt_if = std::count_if(v.begin(), v.end(), [](int i) { return i % 2 == 0; });
  std::cout << "Even numbers count: " << cnt_if << std::endl;

  // std::search
  auto it_search = std::search(v.begin(), v.end(), sub.begin(), sub.end());
  std::cout << "Pattern {3, 4} found starting at position: " << std::distance(v.begin(), it_search) << std::endl;

  // std::search_n
  auto it_search_n = std::search_n(v.begin(), v.end(), 2, 5);// Search for two consecutive 5s
  std::cout << "Two consecutive 5s found starting at position: " << std::distance(v.begin(), it_search_n) << std::endl;

  // Binary search algorithms require sorted vector
  std::sort(v.begin(), v.end());

  // std::lower_bound
  auto it_lower_bound = std::lower_bound(v.begin(), v.end(), 3);
  std::cout << "Lower bound for 3: " << *it_lower_bound << std::endl;

  // std::upper_bound
  auto it_upper_bound = std::upper_bound(v.begin(), v.end(), 3);
  std::cout << "Upper bound for 3: " << *it_upper_bound << std::endl;

  // std::equal_range
  auto p_equal_range = std::equal_range(v.begin(), v.end(), 3);
  std::cout << "Equal range for 3: [" << *p_equal_range.first << ", " << *(p_equal_range.second - 1) << "]" << std::endl;

  // std::binary_search
  bool found_binary_search = std::binary_search(v.begin(), v.end(), 3);
  std::cout << "3 " << (found_binary_search ? "found" : "not found") << " in sorted vector." << std::endl;

  return 0;
}
