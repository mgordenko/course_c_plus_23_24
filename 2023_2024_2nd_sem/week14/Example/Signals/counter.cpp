#include "counter.h"
#include <iostream>

Counter::Counter(QObject *parent) : QObject(parent)
{
  // устанавливаем соединение между сигналом created и слотом onCreated
  QObject::connect(this, SIGNAL(created()),this, SLOT(onCreated()));
  emit created(); // генерируем сигнал created
}
// реализация слота onCreated
void Counter::onCreated()
{
  std::cout << "Counter Object created!" << std::endl;
}
