///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create a program to extract a specific line number from a text file and write it to another file.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <string>

void extractLineToFile(const std::string& inputFilePath, const std::string& outputFilePath, int lineNum) {
    std::string line;
    int counter = 1;
    std::fstream in(inputFilePath);
    if (in.is_open()) {
        std::ofstream out;
        out.open(outputFilePath);
        if (out.is_open()) {
            while (std::getline(in, line)) {
                if (counter == lineNum) {
                    out << line;
                    break;
                }
                else counter++;
            }
        }
        out.close();
    }
    in.close();

}

int main() {
    int line = 3;
    extractLineToFile("/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem6_line/input.txt", "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem6_line/output.txt", line);
    return 0;
}

