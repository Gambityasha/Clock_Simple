#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    Clock_Exemp = new Clock();
    ui->gridLayout->addWidget(Clock_Exemp);

}

MainWindow::~MainWindow()
{
    Clock_Exemp->deleteLater();
    delete ui;
}

