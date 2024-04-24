#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter: public QObject
{
  Q_OBJECT
 public:
  Counter(){}
  void increase();

 signals:
  void increased(int newValue);
 private:
  int value{};
};

#endif // COUNTER_H
