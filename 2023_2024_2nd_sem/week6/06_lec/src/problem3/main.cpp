#include <iostream>

enum WeekdayFlags {
  None = 0,
  Monday = 1 << 0,   //1
  Tuesday = 1 << 1,  //10
  Wednesday = 1 << 2,//100
  Thursday = 1 << 3, //1000
  Friday = 1 << 4,   //10000
  Saturday = 32,
  Sunday = 0b1000000,
};

const int WorkingDays = Monday | Tuesday | Wednesday | Thursday | Friday;
// 00011111
const int Weekend = Saturday | Sunday;
// 01100000
const int AllDays = WorkingDays | Weekend;
// 01111111 = 127
void printDays(const char *description, int days) {
  std::cout << description << ": ";
  if (days & Monday) std::cout << "Mon ";
  if (days & Tuesday) std::cout << "Tue ";
  if (days & Wednesday) std::cout << "Wed ";
  if (days & Thursday) std::cout << "Thu ";
  if (days & Friday) std::cout << "Fri ";
  if (days & Saturday) std::cout << "Sat ";
  if (days & Sunday) std::cout << "Sun ";
  std::cout << std::endl;
}
int main() {
  int meetingDays = Monday | Wednesday | Friday | Saturday;
  // 00110101 & 00011111 = 00010101
  int potentialMeetingDays = meetingDays & WorkingDays;
  printDays("Potential meeting days (not on weekend)", potentialMeetingDays);
  int onlineDays = Wednesday | Friday;
  int potentialMeetingDaysNotOnline = potentialMeetingDays & ~onlineDays;
  printDays("Potential meeting days (not on weekend, not online)", potentialMeetingDaysNotOnline);
  return 0;
}