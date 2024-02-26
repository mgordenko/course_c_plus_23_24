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

void createBinaryFile(const std::string& filePath) {
    std::ofstream file(filePath, std::ios::binary);

    if (!file) {
        std::cerr << "Failed to open file for writing." << std::endl;
        return;
    }

    unsigned char data[] = {0x41, 0x42, 0x43, 0x44, 0x45};

    file.write(reinterpret_cast<char*>(data), sizeof(data));

    file.close();

    std::cout << "Binary file created successfully: " << filePath << std::endl;
}





void reverseCopyBinaryFile(const std::string& inputFilePath, const std::string& outputFilePath){

}

int main() {
    std::string inp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem9_byte/input.bin";
    std::string outp = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem9_byte/output.bin";
//    reverseCopyBinaryFile(inp, outp);
    read_file(inp);
    return 0;
}
