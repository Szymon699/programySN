#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QString imie,nazwisko,miasto,wynik;
    void Error(QString komunikat);

private slots:
    void on_ok_clicked();


private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
