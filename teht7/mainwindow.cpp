#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
    pQTimer = nullptr;
}


void MainWindow::setGameInfoText(QString a)
{
    ui->labelGameState->setText(a);
}


void MainWindow::on_btnTime1_clicked()
{
    player1Time = 120;
    player2Time = 120;
    ui->pb1->setMaximum(120);
    ui->pb1->setValue(player1Time);
    ui->pb2->setMaximum(120);
    ui->pb2->setValue(player2Time);
    setGameInfoText("Ready to play, press start");
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(updateProgressBar()));
}


void MainWindow::on_btnTime2_clicked()
{
    player1Time = 300;
    player2Time = 300;
    ui->pb1->setMaximum(300);
    ui->pb1->setValue(player1Time);
    ui->pb2->setMaximum(300);
    ui->pb2->setValue(player2Time);
    setGameInfoText("Ready to play, press start");
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(updateProgressBar()));
}

void MainWindow::updateProgressBar()
{
    if(currentPlayer == 1){
        ui->pb1->setValue(player1Time);
        player1Time--;
    }
    else if(currentPlayer == 2){
        ui->pb2->setValue(player2Time);
        player2Time--;
    }
    if(player1Time == 0){
        setGameInfoText("Player 2 WON!");
        pQTimer->stop();
    }
    if(player2Time == 0){
        setGameInfoText("Player 1 WON!");
        pQTimer->stop();
    }

}


void MainWindow::on_btnStart_clicked()
{
    currentPlayer=1;
    setGameInfoText("Game ongoing");
    pQTimer->start(1000);
}


void MainWindow::on_btnSwitch1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_btnSwitch2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_btnStop_clicked()
{
    setGameInfoText("Select playtime to start a new game");
    pQTimer->stop();
}

