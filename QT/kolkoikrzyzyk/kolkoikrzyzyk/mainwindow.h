#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPointer>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    void wcisnij(QPointer<QPushButton>,int tab[3][3],int,int);
    int sprawdz(int tab[3][3]);
    void zwyciezca(int);
    void blokuj();
    int tab[3][3];
    bool xo;


private slots:
    void on_pB_clicked();

    void on_pB_2_clicked();

    void on_pB_3_clicked();

    void on_pB_4_clicked();

    void on_pB_5_clicked();

    void on_pB_6_clicked();

    void on_pB_7_clicked();

    void on_pB_8_clicked();

    void on_pB_9_clicked();

    void on_start_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
