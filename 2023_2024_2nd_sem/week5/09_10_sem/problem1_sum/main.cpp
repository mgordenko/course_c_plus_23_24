///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function to read a file containing integers 
/// separated by spaces or newlines, sum these integers, and write the result to another file.
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <sstream>

int sumIntegersInFile(const std::string& inputFilePath, const std::string& outputFilePath){
    std::string line;
    int number;
    int sum = 0;
    std::ifstream in(inputFilePath);
    if (in.is_open())
    {
        while (std::getline(in, line))
        {
            std::istringstream iss(line);
            while (iss >> number) {
                sum += number;
            }
        }
    }
    in.close();

    std::ofstream out;
    out.open(outputFilePath);
    if (out.is_open())
    {
        out << sum << '\n';
    }
    out.close();
};

int main() {
    std::string path_input = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem1_sum/input.txt";
    std::string path_output = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem1_sum/output.txt";

    sumIntegersInFile(path_input, path_output);
    return 0;
}
