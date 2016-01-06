#include <QVBoxLayout>
#include <QFont>
#include "label_demonstration.h"

LabelDemonstration::LabelDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QString text = "Hello world\nChunky peanut butter\nVeggie fries";
    
    label1 = new QLabel(text, this);
    label1->setFont(QFont("Times New Roman", 20));
    label2 = new QLabel(text, this);
    label2->setFont(QFont("Tahoma", 20));
    
    QVBoxLayout *vbox = new QVBoxLayout();
    vbox->addWidget(label1);
    vbox->addWidget(label2);
    setLayout(vbox);
}