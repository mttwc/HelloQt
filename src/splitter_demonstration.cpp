#include "splitter_demonstration.h"
#include <QFrame>
#include <QSplitter>
#include <QHBoxLayout>

SplitterDemonstration::SplitterDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    
    QFrame *topLeft = new QFrame(this);
    topLeft->setFrameShape(QFrame::StyledPanel);
    
    QFrame *topRight = new QFrame(this);
    topRight->setFrameShape(QFrame::StyledPanel);
    
    QSplitter *splitter1 = new QSplitter(Qt::Horizontal, this);
    splitter1->addWidget(topLeft);
    splitter1->addWidget(topRight);
    
    QFrame *bottom = new QFrame(this);
    bottom->setFrameShape(QFrame::StyledPanel);
    
    QSplitter *splitter2 = new QSplitter(Qt::Vertical, this);
    splitter2->addWidget(splitter1);
    splitter2->addWidget(bottom);
    
    // The first 'row' will be 50 pixels wide in the vertical direction, the second 'row' will be 100
    QList<int> sizes({50, 100});
    splitter2->setSizes(sizes);
    
    hbox->addWidget(splitter2);
}