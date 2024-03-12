
/*
Реализовать класс AutoSaveFile, который:

Открывает файл для записи в конструкторе.
Предоставляет метод write для добавления содержимого в файл.
Использует перемещающий конструктор и перемещающий оператор 
присваивания для передачи управления файлом между объектами AutoSaveFile.
Автоматически закрывает файл и сохраняет все изменения при уничтожении объекта.
*/

#include <fstream>
#include <iostream>
#include <string>

class AutoSaveFile {
 public:
  AutoSaveFile(const std::string &filename) : filename_(filename),
                                              ofs_(filename, std::ofstream::out) {
    if (!ofs_) {
      throw std::runtime_error("Not opened: " + filename);
    }
  }

  AutoSaveFile(const AutoSaveFile &) = delete;
  AutoSaveFile &operator=(const AutoSaveFile &) = delete;

  AutoSaveFile(AutoSaveFile &&other) noexcept : filename_(std::move(other.filename_)), ofs_(std::move(other.ofs_)) {
    other.filename_.clear();
  }

  AutoSaveFile &operator=(AutoSaveFile &&other) noexcept {
    if (this != &other) {
      filename_ = std::move(other.filename_);
      ofs_ = std::move(other.ofs_);
      other.filename_.clear();
    }
    return *this;
  }

  void write(const std::string &data) {
    if (!ofs_) {
      throw std::runtime_error("File not open");
    }
    ofs_ << data;
  }

  ~AutoSaveFile() {
    if (ofs_) {
      ofs_.close();
      std::cout << "File '" << filename_ << "' saved." << std::endl;
    }
  }

 private:
  std::string filename_;
  std::ofstream ofs_;
};

int main() {
  AutoSaveFile file1("temp.txt");
  file1.write("First.\n");
  AutoSaveFile file2 = std::move(file1);
  //AutoSaveFile file3(std::move(file1));
  file2.write("ТText aftermove.\n");
  return 0;
}
