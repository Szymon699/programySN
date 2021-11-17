#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int komp, uzyt,pkt;
    void wybierz(int);
    void wygrana(int,int);

private slots:
    void on_u1_clicked();

    void on_u2_clicked();

    void on_u3_clicked();

    void on_reset_clicked();

    void on_ustaw_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
