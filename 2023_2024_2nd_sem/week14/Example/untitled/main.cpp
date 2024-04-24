#include <QCoreApplication>
#include <QApplication>
#include <QWidget>
#include <QLabel>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget widget;
  widget.setWindowTitle("Qt Hello");
  widget.setMinimumHeight(180);  // высота окна
  widget.setMinimumWidth(300);  // ширина окна

  QLabel label{&widget};      // создаем текстовую метку
  label.setText("Hello"); // установка текста метки

  widget.show();  // отображаем виджет
  return app.exec();
}
