#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct Time {
 private:
  int hours;
  int minutes;
  int seconds;

 public:
  Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

  Time operator-(const Time &other) const {
    int totalSeconds1 = hours * 3600 + minutes * 60 + seconds;
    int totalSeconds2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
    int diff = totalSeconds1 - totalSeconds2;

    if (diff < 0) {
      return Time(0, 0, 0);
    }

    int h = diff / 3600;
    diff %= 3600;
    int m = diff / 60;
    int s = diff % 60;

    return Time(h, m, s);
  }

  friend std::ostream &operator<<(std::ostream &os, const Time &time);
  friend std::istream &operator>>(std::istream &is, Time &time);
};

std::ostream &operator<<(std::ostream &os, const Time &time) {
  os << time.hours << ":" << (time.minutes < 10 ? "0" : "") << time.minutes << ":" << (time.seconds < 10 ? "0" : "") << time.seconds;
  return os;
}

std::istream &operator>>(std::istream &is, Time &time) {
  char delim1, delim2;
  is >> time.hours >> delim1 >> time.minutes >> delim2 >> time.seconds;
  return is;
}

struct Flight {
  std::string flightID;
  std::string departureAirport;
  std::string arrivalAirport;
  Time departureTime;

  Flight(std::string id = "", std::string departure = "", std::string arrival = "", Time time = Time()) : flightID(id), departureAirport(departure), arrivalAirport(arrival), departureTime(time) {}

  friend std::ostream &operator<<(std::ostream &os, const Flight &flight);
  friend std::istream &operator>>(std::istream &is, Flight &flight);
};

std::ostream &operator<<(std::ostream &os, const Flight &flight) {
  os << flight.flightID << " " << flight.departureAirport << " " << flight.arrivalAirport << " " << flight.departureTime;
  return os;
}

std::istream &operator>>(std::istream &is, Flight &flight) {
  is >> flight.flightID >> flight.departureAirport >> flight.arrivalAirport >> flight.departureTime;
  return is;
}

int main() {
  std::vector<Flight> flights;
  std::string inputFile = "flights_in.txt";
  std::string outputFile = "flights_out.txt";

  std::ifstream inFile(inputFile);
  if (!inFile) {
    std::cerr << "Error opening input file." << std::endl;
    return 1;
  }

  Flight tempFlight;
  while (inFile >> tempFlight) {
    flights.push_back(tempFlight);
  }
  inFile.close();

  for (const auto &flight : flights) {
    std::cout << flight << std::endl;
  }

  std::ofstream outFile(outputFile);
  if (!outFile) {
    std::cerr << "Error opening output file." << std::endl;
    return 1;
  }

  for (const auto &flight : flights) {
    if (flight.arrivalAirport == "MIA")
      outFile << flight << std::endl;
  }
  outFile.close();

  return 0;
}
