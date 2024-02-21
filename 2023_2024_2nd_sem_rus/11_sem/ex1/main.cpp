#include <fstream>
#include <iostream>

class FileWrapper {
  std::fstream file;

 public:
  FileWrapper(const std::string &filename) {
    file.open(filename, std::ios::out | std::ios::app);
    if (!file.is_open()) {
      std::cerr << "Error!" << std::endl;
    }
  }
  ~FileWrapper() {
    if (file.is_open()) {
      file.close();
      std::cout << "Closed." << std::endl;
    }
  }
};
int main() {
  FileWrapper *fw = new FileWrapper("example.txt");
  fw->~FileWrapper();
  return 0;
}
