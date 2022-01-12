#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QGroupBox>
#include <QSpinBox>


class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog();


private:
    void createHorizontalGroupBox();
    void create();
    QGroupBox *horizontalGroupBox;
    QGroupBox *verticalGroupBox;
    QPushButton *button[4];
    QPushButton *accept;
    QSpinBox *spinBox;

};
#endif // DIALOG_H
