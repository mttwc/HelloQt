#include "plus_minus_demonstration.h"
#include <QGridLayout>
#include <QPushButton>

PlusMinusDemonstration::PlusMinusDemonstration(QWidget *parent)
    : QWidget(parent)
{
    num = 0;
    
    QPushButton *plsBtn = new QPushButton("+", this);
    QPushButton *minBtn = new QPushButton("-", this);
    lbl = new QLabel(QString::number(num), this);
    
    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(plsBtn, 0, 0);
    grid->addWidget(minBtn, 0, 1);
    grid->addWidget(lbl, 1, 1);
    
    setLayout(grid);
    
    connect(plsBtn, &QPushButton::clicked, this, &PlusMinusDemonstration::OnPlus);
    connect(minBtn, &QPushButton::clicked, this, &PlusMinusDemonstration::OnMinus);
}

void PlusMinusDemonstration::OnPlus()
{
    lbl->setText(QString::number(++num));
}

void PlusMinusDemonstration::OnMinus()
{
    lbl->setText(QString::number(--num));
}