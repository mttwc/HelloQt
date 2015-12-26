#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include "button_demonstration.h"

ButtonDemonstration::ButtonDemonstration(QWidget *parent)
    : QWidget(parent) {
    
    QPushButton *quitBtn = new QPushButton("Quit", this);
    quitBtn->setGeometry(50, 40, 75, 30);
    
    connect(quitBtn, SIGNAL(clicked()), qApp, SLOT(quit()));
}