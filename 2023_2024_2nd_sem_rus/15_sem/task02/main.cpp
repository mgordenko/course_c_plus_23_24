#include <chrono>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>

class Logger {
 public:
  // virtual ~Logger() {}
  virtual void logMessage(const std::string& message) = 0;
};

class FileLogger : public Logger {
 public:
  FileLogger(const std::string& filename = "logfile.log") {
    logFile.open(filename, std::ios::app);
    if (!logFile.is_open()) {
      std::cerr << "Ошибка открытия файла журнала!" << std::endl;
    }
  }

  ~FileLogger() {
    if (logFile.is_open()) {
      logFile.close();
    }
  }

 public:
  void logMessage(const std::string& message) override {
    std::cout << "Logging to a file: " << message << std::endl;
    logFile << message << std::endl;
  }

 private:
  std::ofstream logFile;
};

class DatabaseLogger : public Logger {
 public:
  void logMessage(const std::string& message) override {
    std::cout << "Logging to a database: " << message << std::endl;
  }
};

class NetworkLogger : public Logger {
 public:
  void logMessage(const std::string& message) override {
    std::cout << "Logging to a network: " << message << std::endl;
  }
};

class LoggerFactory {
 public:
  enum LoggerType { FILE, DATABASE, NETWORK };

  static std::unique_ptr<Logger> createLogger(LoggerType type) {
    switch (type) {
      case FILE:
        return std::make_unique<FileLogger>();
      case DATABASE:
        return std::make_unique<DatabaseLogger>();
      case NETWORK:
        return std::make_unique<NetworkLogger>();
      default:
        throw std::invalid_argument("Invalid logger type");
    }
  }
};

int main() {
  auto fileLogger = LoggerFactory::createLogger(LoggerFactory::FILE);
  fileLogger->logMessage("This is a file logging message.");

  auto databaseLogger = LoggerFactory::createLogger(LoggerFactory::DATABASE);
  databaseLogger->logMessage("This is a database logging message.");

  auto networkLogger = LoggerFactory::createLogger(LoggerFactory::NETWORK);
  networkLogger->logMessage("This is a network logging message.");

  return 0;
}