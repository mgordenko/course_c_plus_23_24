///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program to copy a binary file to another file in reverse byte order.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>

void reverseCopyBinaryFile(const std::string& inputFilePath, const std::string& outputFilePath);

int main() {
    reverseCopyBinaryFile("input_binary.bin", "output_reversed.bin");
    return 0;
}
