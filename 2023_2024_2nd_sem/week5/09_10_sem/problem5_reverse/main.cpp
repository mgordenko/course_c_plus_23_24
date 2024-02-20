///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program to read the content of a text file and write its content in reverse order to another file.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

std::string reverse_string(std::string str){
    std::string ans;
    for (int i = str.length() - 1; i >= 0; i--) {
        ans += str[i];
    }
    return ans;
}

void reverseFileContent(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::string text;
    std::fstream in(inputFilePath);
    if (in.is_open()) {
        std::stringstream buff;
        buff << in.rdbuf();
        text = buff.str();
        text = reverse_string(text);
    }
    in.close();
    std::ofstream out;
    out.open(outputFilePath);
    if (out.is_open()) {
        out << text;
    }
    out.close();
}

int main() {
    std::string inp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem5_reverse/input.txt";
    std::string outp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem5_reverse/output.txt";
    reverseFileContent(inp, outp);
    return 0;
}
