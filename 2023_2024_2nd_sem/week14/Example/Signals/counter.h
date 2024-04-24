#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>

class Counter: public QObject
{
  Q_OBJECT
 public:
  explicit Counter(QObject *parent = nullptr);
 signals:
  void created();     // сигнал
 public slots:
  void onCreated();   // слот
};

#endif // COUNTER_H
