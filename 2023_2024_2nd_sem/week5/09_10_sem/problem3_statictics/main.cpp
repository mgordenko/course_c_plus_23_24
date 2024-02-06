///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program to count the number of lines, words, and characters in a text file.
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <sstream> 

void countFileStatistics(const std::string& filePath);

int main() {
    countFileStatistics("file.txt");
    return 0;
}