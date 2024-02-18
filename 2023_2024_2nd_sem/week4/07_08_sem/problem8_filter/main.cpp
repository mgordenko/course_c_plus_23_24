///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Filter Array
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `int* filter(int* arr, int size, int& newSize, bool (*filterFunc)(int))`
/// that filters an array based on a predicate function and returns a new array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

bool is_divisible_by_eleven(int n){
    if (n % 11 == 0) return true;
    return false;
}

std::vector<int> filter(std::vector<int> arr, int size, bool (*filterFunc)(int)) {
    int filterd_size = 0;
    for (int i = 0; i <= size; i++) {
        if (filterFunc(arr[i])) filterd_size++;
    }

    std::vector<int> filtered_arr;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (filterFunc(arr[i])) {
            filtered_arr.push_back(arr[i]);
            counter += 1;
        }
        if (counter == filterd_size) {
            break;
        }
    }
    return filtered_arr;
}

void input_array(std::vector<int> *arr, int size) {
    for (int i = 0; i < size; i++) {
        int n;
        std::cin >> n;
        (*arr).push_back(n);
    }
}

void print_array(std::vector<int> arr, int size, char sep) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << sep;
    }
    std::cout << std::endl;
}

int main()
{
    int size;
    std::cin >> size;
    std::vector<int> arr;
    input_array(&arr, size);
    print_array(arr, arr.size(), ' ');
    std::vector<int> new_arr (filter(arr, size, is_divisible_by_eleven));
    print_array(new_arr, new_arr.size(), ' ');
}
