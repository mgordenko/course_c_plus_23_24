///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Develop a program to append content to the end of an existing file without overwriting its current content.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <string>

void appendToFile(const std::string& filePath, const std::string& content) {
    std::ofstream out(filePath, std::ios::app);
    if (out.is_open()) {
        out << content;
    }
    out.close();
};

int main() {
    std::string PATH = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem8_append/existing_file.txt";
    appendToFile(PATH, "Appended content.\n");
    return 0;
}
