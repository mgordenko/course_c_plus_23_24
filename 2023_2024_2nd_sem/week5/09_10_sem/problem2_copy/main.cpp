///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create a function that copies the content of one file to another file.
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream> 
#include <iostream>


void copyFile(const std::string& sourceFilePath, const std::string& destinationFilePath){
    std::string line;
    std::ifstream in(sourceFilePath);
    if (in.is_open())
    {
        std::ofstream out;
        out.open(destinationFilePath);
        if (out.is_open())
        {
            while (std::getline(in, line))
            {
                out << line << '\n';
            }
        }
    }
    in.close();
}

int main() {
    std::string path_1 = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem2_copy/file_1.txt";
    std::string path_2 = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem2_copy/file_2.txt";
    copyFile(path_1, path_2);
    return 0;
}
