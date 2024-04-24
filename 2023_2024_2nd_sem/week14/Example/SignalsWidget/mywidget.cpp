#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
  myButton = new QPushButton("Click Me", this);
  setMinimumSize(250, 150);
  setWindowTitle("METANIT.COM");

  // перенаправляем сигнал clicked кнопки на сигнал widgetClicked
  connect(myButton, &QPushButton::clicked, this, &MyWidget::widgetClicked);
}
