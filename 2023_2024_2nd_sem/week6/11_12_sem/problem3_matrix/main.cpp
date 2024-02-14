///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Read a single integer n from the file. In another file, write a matrix filled 
/// in the following way:
/// 1   2   3   4
/// 8   7   6   5
/// 9   10  11  12
/// 16  15  14  13
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