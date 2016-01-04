#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QListWidget>
#include <QPushButton>
#include "nesting_demonstration.h"

NestingDemonstration::NestingDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout();
    QHBoxLayout *hbox = new QHBoxLayout(this);
    
    QListWidget *lw = new QListWidget(this);
    lw->addItem("The Omen");
    lw->addItem("The Exorcist");
    lw->addItem("Notes on a Scandal");
    lw->addItem("Fargo");
    lw->addItem("Capote");
    
    QPushButton *add = new QPushButton("Add", this);
    QPushButton *rename = new QPushButton("Rename", this);
    QPushButton *remove = new QPushButton("Remove", this);
    QPushButton *removeAll = new QPushButton("Remove All", this);
    
    // addStretch() on top and bottom ensures buttons are vertically centered
    // setSpacing() refers to the space between buttons
    vbox->setSpacing(3);
    vbox->addStretch(1);
    vbox->addWidget(add);
    vbox->addWidget(rename);
    vbox->addWidget(remove);
    vbox->addWidget(removeAll);
    vbox->addStretch(1);
    
    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);
    
    setLayout(hbox);
}