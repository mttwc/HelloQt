#include <QTextStream>
#include <QCheckBox>
#include <QHBoxLayout>
#include "disconnect_demonstration.h"

DisconnectDemonstration::DisconnectDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);
    
    clickBtn = new QPushButton("Click", this);
    hbox->addWidget(clickBtn, 0, Qt::AlignLeft | Qt::AlignTop);
    
    QCheckBox *cb = new QCheckBox("Connect", this);
    cb->setCheckState(Qt::Checked);
    hbox->addWidget(cb, 0, Qt::AlignLeft | Qt::AlignTop);
    
    connect(clickBtn, &QPushButton::clicked, this, &DisconnectDemonstration::onClick);
    connect(cb, &QCheckBox::stateChanged, this, &DisconnectDemonstration::onCheck); 
}

void DisconnectDemonstration::onClick()
{
    QTextStream out(stdout);
    out << "Button clicked" << endl;
}

void DisconnectDemonstration::onCheck(int state)
{
    if (state == Qt::Checked)
    {
        connect(clickBtn, &QPushButton::clicked, this, &DisconnectDemonstration::onClick);
    }
    else
    {
        disconnect(clickBtn, &QPushButton::clicked, this, &DisconnectDemonstration::onClick);
    }
}