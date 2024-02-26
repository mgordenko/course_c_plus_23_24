///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function to find and replace all occurrences of a word in a file.
///
///////////////////////////////////////////////////////////////////////////////

#include "iostream"
#include "string"
#include <fstream>
#include <sstream>

// i wanna keep this part
//
//void print_array(std::vector<std::string> arr, char sep) {
//    int size = arr.size();
//    for (int i = 0; i < size; i++) {
//        if (i == size - 1) std::cout << arr[i];
//        else std::cout << arr[i] << sep;
//    }
//    std::cout << std::endl;
//}
//
//std::vector<std::string> split(std::string text, char c){
//    std::vector<std::string> ans;
//    int index = 0;
//    for (int i = 0; i < text.length(); i++) {
//        if (text[i] == c) {
//            ans.push_back(text.substr(index, i - index));
//            index = i + 1;
//        }
//    }
//    ans.push_back(text.substr(index));
//    return ans;
//}
//
//std::string join(std::vector<std::string> words, char sep) {
//    std::string ans;
//    for(int i = 0; i < words.size(); i++) {
//        if (i == words.size() - 1) {
//            ans += words[i];
//        }
//        else {
//            ans += words[i];
//            ans += sep;
//        }
//    }
//    return ans;
//}

std::string replace(std::string str, std::string old_string, std::string new_string) {
    int len_old = old_string.length();
    std::string ans;
    int index = 0;
    while (index < str.length()) {
        if (str.substr(index, len_old) == old_string) {
            ans += new_string;
            index = index + len_old;
        }
        else {
            ans += str[index];
            index++;
        }
   }
    return ans;
}





void findAndReplaceInFile(const std::string& filePath, const std::string& toFind, const std::string& toReplace) {
    std::string text;
    std::string line;
    std::fstream in(filePath);
    if (in.is_open()) {
        std::stringstream buff;
        buff << in.rdbuf();
        text = buff.str();
        text = replace(text, toFind, toReplace);
    }
    in.close();
    std::ofstream out;
    out.open(filePath);
    if (out.is_open()) {
        out << text;
    }
    out.close();
}

int main() {
    std::string file_path = "/Users/mayakorablina/Yandex.Disk.localized/CodingProjects/cpp_course_2_sem/2023_2024_2nd_sem/week5/09_10_sem/problem4_replace/text.txt";
    findAndReplaceInFile(file_path, "hello", "bye bye");
    return 0;
}