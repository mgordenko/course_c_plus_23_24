///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that reads information about company employees (name, position, salary) 
/// from a text file and increases the salary of each employee by 10%, writing the updated 
/// information to a new file.
/// Write two functions: for txt and csv file.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <string>

void reverseFileContent(const std::string& inputFilePath, const std::string& outputFilePath);

int main() {
    reverseFileContent("input.txt", "output_reversed.txt");
    return 0;
}
