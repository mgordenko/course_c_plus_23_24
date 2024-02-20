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

int count_words(std::string text) {
    int words = 0;
    for (char c : text) {
        if (c == ' '){
            words++;
        }
    }
    words++;
    return words;
}

void countFileStatistics(const std::string& input_path, const std::string& output_file) {
    std::string line;
    int lines = 0; int words = 0; int characters = 0;
    std::fstream in(input_path);
    if (in.is_open()) {
        while (std::getline(in, line)) {
            lines++;
            std::istringstream iss(line);
            words += count_words(line);
            characters += line.length();
        }
    }
    std::ofstream out;
    out.open(output_file);
    if (out.is_open()) {
        out << "Number of rows: " << lines << '\n' << "Number of words: " << words << '\n' << "Number of characters: " << characters;
    }
    out.close();
}
int main() {
    std::string inp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem3_statictics/input.txt";
    std::string outp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem3_statictics/output.txt";
    countFileStatistics(inp, outp);
    return 0;
}