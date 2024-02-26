///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
///Write a program that reads a text file, converts all lowercase letters to uppercase, and writes the result to a new file.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <cctype> // For toupper()
#include <fstream>
#include <sstream>

std::string reverse_letters(std::string text) {
    for (int i = 0; i < text.length(); i++) {
        if (isupper(text[i])) {
            text[i] = tolower(text[i]);
        }
        else if (islower(text[i])) {
            text[i] = toupper(text[i]);
        }
    }
    return text;
}

void convertToLowercase(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::string text;
    std::string line;
    std::fstream in(inputFilePath);
    if (in.is_open()) {
        std::stringstream buff;
        buff << in.rdbuf();
        text = buff.str();
        text = reverse_letters(text);
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
    std::string input = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem10_change/input.txt";
    std::string output = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem10_change/output_uppercase.txt";
    convertToLowercase(input, output);
    return 0;
}
