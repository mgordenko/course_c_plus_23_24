#include <QCoreApplication>

#include <iostream>
#include "counter.h"    // подключаем класс Counter

void onCounterChanged(int);

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);

  Counter counter{};
  QObject::connect(&counter, &Counter::increased, onCounterChanged);
  // изменяем значение
  counter.increase();       // New value: 1
  counter.increase();       // New value: 2
  counter.increase();       // New value: 3

  return a.exec();
}

void onCounterChanged(int newValue){
  std::cout << "New value: " << newValue << std::endl;
}
