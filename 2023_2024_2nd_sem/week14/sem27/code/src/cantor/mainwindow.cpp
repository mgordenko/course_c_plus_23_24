#include "mainwindow.h"
#include "./cantor/ui_mainwindow.h"

#include <iostream>

#include <QtWidgets>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // setting render area
    _renderArea = new RenderArea(ui->centralwidget);

    QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    sizePolicy.setHorizontalStretch(0);
    sizePolicy.setVerticalStretch(0);
    sizePolicy.setHeightForWidth(_renderArea->sizePolicy().hasHeightForWidth());
    _renderArea->setSizePolicy(sizePolicy);


    // setting the layout
    QHBoxLayout* horLayout = new QHBoxLayout(ui->centralwidget); //(centralwidget);
    horLayout->addWidget(_renderArea);
    horLayout->addWidget(ui->grpSettings);

    // trigger setting default parameters
    on_spinBoxLevels_valueChanged(ui->spinBoxLevels->value());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setLevelsSlot(int lvls)
{
    std::cout << lvls << "\n";
    _renderArea->setLevels(lvls);
}

void MainWindow::on_spinBoxLevels_valueChanged(int lvls)
{
//    _renderArea->setLevels(lvls);
}
