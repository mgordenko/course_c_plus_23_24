#include <QApplication>
#include <QMessageBox>

#include "mywidget.h"

void onClick();
int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  MyWidget widget{};

  // устанавливаем для события clicked обработчик onClick
  QObject::connect(&widget, &MyWidget::widgetClicked, onClick);
  widget.show();
  return app.exec();
}
// обработчик нажатия
void onClick()
{
  QMessageBox msgBox;     // диалоговое окно
  msgBox.setText("Widget Clicked!"); // устанавливаем текст
  msgBox.exec();  // отображаем диалоговое окно
}
