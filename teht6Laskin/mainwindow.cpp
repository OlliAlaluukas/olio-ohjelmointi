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


void MainWindow::on_N1_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N2_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N3_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N4_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N5_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N6_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N7_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N8_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N9_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_N0_clicked()
{
    numberClickedHandler();
}


void MainWindow::on_clear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_enter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_add_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_sub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_mul_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_div_clicked()
{
    addSubMulDivClickHandler();
}

void MainWindow::numberClickedHandler()
{
    if(test == 1){
        ui->num1->setText("");
        ui->num2->setText("");
        ui->result->setText("");
        test = 0;
    }
    if(state == 1){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString butVal = button->text();
        number1 = ui->num1->text();
        if((number1.toDouble() == 0) || (number1.toDouble() == 0.0)){
            ui->num1->setText(butVal);
            number1 = butVal;
        } else {
            QString newVal = number1 + butVal;
            double dblNewVal = newVal.toDouble();
            number1 = QString::number(dblNewVal);
            ui->num1->setText(QString::number(dblNewVal, 'g', 16));

        }
    }
    else if (state == 2){
        QPushButton * button = qobject_cast<QPushButton*>(sender());
        QString butVal = button->text();
        number2 = ui->num2->text();
        if((number2.toDouble() == 0) || (number2.toDouble() == 0.0)){
            ui->num2->setText(butVal);
            number2 = butVal;
        } else {
            QString newVal = number2 + butVal;
            double dblNewVal = newVal.toDouble();
            number2 = QString::number(dblNewVal);
            ui->num2->setText(QString::number(dblNewVal, 'g', 16));
        }
    }



}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString butVal = button->text();
    if(QString::compare(butVal, "clear", Qt::CaseInsensitive) == 0){
        state = 1;
        number1 = "";
        number2 = "";
        ui->num1->setText(number1);
        ui->num2->setText(number2);
        ui->result->setText("");
    }
    else if(QString::compare(butVal, "enter", Qt::CaseInsensitive) == 0){
        double n1 = number1.toDouble();
        double n2 = number2.toDouble();
        switch(operand){
            case 0:
                result = n1 + n2;
                break;
            case 1:
                result = n1 - n2;
                break;
            case 2:
                result = n1 * n2;
                break;
            case 3:
                result = n1 / n2;
                break;
        }
        ui->result->setText(QString::number(result));
        test = 1;
        state = 1;
    }
}

void MainWindow::addSubMulDivClickHandler()
{

    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    if(QString::compare(butVal, "/", Qt::CaseInsensitive) ==0){
        operand = 3;
    } else if(QString::compare(butVal, "*", Qt::CaseInsensitive) ==0){
        operand = 2;
    } else if(QString::compare(butVal, "+", Qt::CaseInsensitive) ==0){
        operand = 0;
    } else {
        operand = 1;
    }
    state = 2;
}

