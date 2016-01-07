#include <QLabel>
#include <QFrame>
#include <QStatusBar>
#include <QHBoxLayout>
#include "status_bar_demonstration.h"

StatusBarDemonstration::StatusBarDemonstration(QWidget *parent)
    : QMainWindow(parent)
{
    QFrame *frame = new QFrame(this);
    setCentralWidget(frame);
    
    QHBoxLayout *hbox = new QHBoxLayout(frame);
    
    okBtn = new QPushButton("OK", frame);
    hbox->addWidget(okBtn, 0, Qt::AlignLeft | Qt::AlignTop);
    
    aplBtn = new QPushButton("Apply", frame);
    hbox->addWidget(aplBtn, 1, Qt::AlignLeft | Qt::AlignTop);
    
    statusBar();
    
    connect(okBtn, &QPushButton::clicked, this, &StatusBarDemonstration::onOkPressed);
    connect(aplBtn, &QPushButton::clicked, this, &StatusBarDemonstration::onApplyPressed);
}

void StatusBarDemonstration::onOkPressed()
{
    statusBar()->showMessage("OK button pressed", 2000);
}

void StatusBarDemonstration::onApplyPressed()
{
    statusBar()->showMessage("Apply button pressed", 2000);
}