#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>

#include "renderarea.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    
    void setLevelsSlot(int lvls);
    void on_spinBoxLevels_valueChanged(int lvls);

private:
    Ui::MainWindow* ui;
    RenderArea* _renderArea;
    //QTextEdit* _renderArea;

};
#endif // MAINWINDOW_H
