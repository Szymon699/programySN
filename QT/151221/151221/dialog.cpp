#include "dialog.h"
#include "ui_dialog.h"
#include <QHBoxLayout>
#include <QPushButton>
#include <QSpinBox>

Dialog::Dialog()
{
    createHorizontalGroupBox();
    create();
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(horizontalGroupBox);
    mainLayout->addWidget(verticalGroupBox);
    setLayout(mainLayout);
}

void Dialog::createHorizontalGroupBox(){
     horizontalGroupBox = new QGroupBox();
     QHBoxLayout *layout = new QHBoxLayout;
     for(int i=0; i<4; i++){
         button[i] = new QPushButton(tr("przycisk %1").arg(i+1));
         layout->addWidget(button[i]);
     }
     horizontalGroupBox->setLayout(layout);
}

void Dialog::create(){
    verticalGroupBox = new QGroupBox();
    QVBoxLayout *layout2 = new QVBoxLayout;
    spinBox = new QSpinBox;
    layout2->addWidget(spinBox);
    accept = new QPushButton(tr("zatwierdz"));
    layout2->addWidget(accept);

    verticalGroupBox->setLayout(layout2);
}


