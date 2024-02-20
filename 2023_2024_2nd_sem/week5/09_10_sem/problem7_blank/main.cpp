///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that removes all blank lines from a text file and writes the result to a new file.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include "fstream"

void remove_blank_lines(std::string inp, std::string outp) {
    std::string line;
    std::fstream in(inp);
    if (in.is_open()) {
        std::ofstream out;
        out.open(outp);
        if (out.is_open()) {
            while (std::getline(in, line)) {
                if (!line.empty()) out << line << '\n';
            }
        }
        out.close();
    }
    in.close();
}

int main()
{
    std::string inp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem7_blank/input.txt";
    std::string outp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem7_blank/output.txt";
    remove_blank_lines(inp, outp);

    return 0;
}
