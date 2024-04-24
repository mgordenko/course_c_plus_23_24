#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    variable = 10;
    QString buttonText = ui->pushButton->text();
    
    ui->pushButton->setText("Click me!");
    QFont curFont = ui->label->font();
    curFont.setPointSize(10);
    ui->label->setFont(curFont);
}

MainWindow::~MainWindow()
{
    delete ui;
}

