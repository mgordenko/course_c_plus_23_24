#include <QApplication>
#include <QWidget>
#include <QGridLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget* widget = new QWidget;
  widget -> setWindowTitle("qt");
  widget->setMinimumWidth(250);
  widget->setMinimumHeight(150);

  QPushButton *btn1 = new QPushButton("Button 1");
  QPushButton *btn2 = new QPushButton("Button 2");
  QPushButton *btn3 = new QPushButton("Button 3");

  QGridLayout *layout = new QGridLayout(widget);
  layout->addWidget(btn1,0,0);
  layout->addWidget(btn2,0, 1);
  layout->addWidget(btn3, 1,0,1,2);

  widget->show();
  return app.exec();
}
