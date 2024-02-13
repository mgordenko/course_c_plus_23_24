//
// Created by Майя Кораблина on 08/02/24.
//
#include <iostream>
#include <fstream>
#include <string>
#include <regex>

std::vector<int> text_info (std::ifstream file, int letters, int words, int lines) {
    std::string input;
    std::string line;

    while (getline(file, line)) {
        input += line + " ";
    }
    std::regex pattern("[^a-zA-Zа-яА-Я]");
    input = regex_replace(input, pattern, " ");
    int counter = 0;
    for (char c : input) {
        if (isalpha(c)) {
            letters += 1;
            counter += 1;
        }
        if (c == ' ') {
            if (counter > 0) {
                words += 1;
                counter = 0;
            }
        }
    }

    std::vector<int> ans = {letters, words, lines};
    return ans;
}

int main() {
    std::string filename = "input.txt";
    std::ifstream file(filename);
    int letters = 0;
    int words = 0;
    int lines = 0;


    std::vector<int> ans = text_info(file, letters, words, lines);

    std::cout << "Input file contains:\n" << ans[0] << " letters\n" << ans[1] << " words\n" << ans[2] << " lines";

    return 0;
}
