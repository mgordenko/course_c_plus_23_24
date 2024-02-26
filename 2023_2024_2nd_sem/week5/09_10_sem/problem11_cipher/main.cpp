///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
///Develop a program to encrypt the content of a text file
/// using the Caesar cipher and write the encrypted content to another
/// file. For simplicity, shift each letter by 3 positions in the alphabet.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <cctype> // For isalpha() and tolower()
#include "sstream"
char caesarCipher(char ch, int shift) {
    if (std::isalpha(ch)) {
        char base = std::islower(ch) ? 'a' : 'A';
        return (ch - base + shift) % 26 + base;
    }
    return ch;
}

// a function to read file cvontent into a string
//add to lib
//need sstream
std::string read_file(std::string file_path) {
    std::string text;
    std::string line;
    std::fstream in(file_path);
    if (in.is_open()) {
        std::stringstream buff;
        buff << in.rdbuf();
        text = buff.str();
    }
    return text;
}

void write_string_into_file(std::string file_path, std::string data) {
    std::ofstream out;
    out.open(file_path);
    if (out.is_open()) {
        out << data;
    }
    out.close();
}

void encryptFileContent(const std::string& inputFilePath, const std::string& outputFilePath, int shift = 3){
    std::string ciphered_text = read_file(inputFilePath);
    std::string initial_text;
    for (int i = 0; i < ciphered_text.length(); i++) {
        initial_text += caesarCipher(ciphered_text[i], -shift);
    }
    write_string_into_file(outputFilePath, initial_text);
}

int main() {
    std::string input = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem11_cipher/input.txt";
    std::string output = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem11_cipher/output_uppercase.txt";
    encryptFileContent(input, output);
    return 0;
}
