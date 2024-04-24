#include <QCoreApplication>
#include "counter.h"    // подключаем класс Counter

int main(int argc, char *argv[])
{
  QCoreApplication a(argc, argv);
  Counter counter{};   // создаем объект Counter
  return a.exec();
}
