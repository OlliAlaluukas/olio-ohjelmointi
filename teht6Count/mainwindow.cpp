#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnCount_clicked()
{
    x++;
    QString tulos = QString::number(x);
    ui->lineEditResult->setText(tulos);
}


void MainWindow::on_btnReset_clicked()
{
    x = 0;
    QString tulos = QString::number(x);
    ui->lineEditResult->setText(tulos);
}

