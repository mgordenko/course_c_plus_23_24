#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPushButton>

class MyWidget : public QWidget
{
  Q_OBJECT
 public:
  MyWidget(QWidget *parent = nullptr);
 signals:
  void widgetClicked();
 private:
  QPushButton *myButton;
};

#endif // MYWIDGET_H
