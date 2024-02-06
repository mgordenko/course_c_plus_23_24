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

#include <fstream> // For fstream
#include <sstream> // For stringstream

void findAndReplaceInFile(const std::string& filePath, const std::string& toFind, const std::string& toReplace);

int main() {
    findAndReplaceInFile("file.txt", "oldWord", "newWord");
    return 0;
}