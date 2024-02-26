#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qtimer.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnTime1_clicked();

    void on_btnTime2_clicked();

    void updateProgressBar();

    void on_btnStart_clicked();

    void on_btnSwitch1_clicked();

    void on_btnSwitch2_clicked();

    void on_btnStop_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;
    void setGameInfoText(QString);
    QTimer *pQTimer;
};
#endif // MAINWINDOW_H
