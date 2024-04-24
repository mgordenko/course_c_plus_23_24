#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

void onClick();
int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget widget;
  widget.setMinimumSize(250, 150);
  widget.setWindowTitle("qt");

  QPushButton btn{"Click", &widget};
  // устанавливаем для события clicked обработчик onClick
  QObject::connect(&btn, &QPushButton::clicked, onClick);
  widget.show();
  return app.exec();
}
// обработчик нажатия
void onClick()
{
  QMessageBox msgBox;     // диалоговое окно
  msgBox.setText("Hello"); // устанавливаем текст
  msgBox.exec();  // отображаем диалоговое окно
}
