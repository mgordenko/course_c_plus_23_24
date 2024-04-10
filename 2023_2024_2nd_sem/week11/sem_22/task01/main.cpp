#include <chrono>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class Logger {
 public:
  enum class Level {
    ERROR = 0,
    WARNING,
    INFO,
    DEBUG,
  };

 private:
  std::ofstream logFile;
  Level currentLevel;

  Logger(const std::string &filename, Level level = Level::INFO) : currentLevel(level) {
    logFile.open(filename, std::ios::app);
    if (!logFile.is_open()) {
      std::cerr << "Ошибка открытия файла журнала!" << std::endl;
    }
  }

  Logger(const Logger &) = delete;
  Logger &operator=(const Logger &) = delete;

 public:
  ~Logger() {
    if (logFile.is_open()) {
      logFile.close();
    }
  }
  static Logger &getInstance(const std::string &filename = "logfile.txt") {
    static Logger instance(filename);
    return instance;
  }

  void setLevel(Level level) {
    currentLevel = level;
  }

  void log(const std::string &message, Level level = Level::INFO) {
    if (level <= currentLevel) {
      auto now = std::chrono::system_clock::now();
      auto now_c = std::chrono::system_clock::to_time_t(now);
      logFile << std::put_time(std::localtime(&now_c), "%Y-%m-%d %X") << " [" << levelToString(level) << "] " << message << '\n';
      std::cout << std::put_time(std::localtime(&now_c), "%Y-%m-%d %X") << " [" << levelToString(level) << "] " << message << '\n';
    }
  }

 private:
  std::string levelToString(Level level) {
    switch (level) {
      case Level::DEBUG:
        return "DEBUG";
      case Level::INFO:
        return "INFO";
      case Level::WARNING:
        return "WARNING";
      case Level::ERROR:
        return "ERROR";
      default:
        return "UNKNOWN";
    }
  }
};

auto &logger = Logger::getInstance();

int sum(int a, int b) {
  logger.log("Зашли в метод sum.", Logger::Level::DEBUG);
  int res = a + b;
  logger.log("Суммируем числа " + std::to_string(a) + " "
                 + std::to_string(b) + "res = " + std::to_string(res),
             Logger::Level::INFO);
  return a + b;
}

int main() {
  logger.setLevel(Logger::Level::DEBUG);
  sum(10, 20);
  return 0;
}
