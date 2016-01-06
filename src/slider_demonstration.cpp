#include <QHBoxLayout>
#include "slider_demonstration.h"

SliderDemonstration::SliderDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    
    slider = new QSlider(Qt::Horizontal, this);
    hbox->addWidget(slider);
    
    label = new QLabel("0", this);
    hbox->addWidget(label);
    
    // Note: signature of valueChanged is 'void valueChanged(int)'
    //       QLabel has two overloaded setNum slot functions: 'void setNum(int)' and 'void setNum(double)'
    // We want to disambiguate which slot we want to use, so we use static_cast
    // connect(slider, &QSlider::valueChanged, label, static_cast<void (QLabel::*)(int)>(&QLabel::setNum));
    
    // Another way, (maybe) more readable
    connect(slider, &QSlider::valueChanged, this, &SliderDemonstration::onSliderChanged);
}

void SliderDemonstration::onSliderChanged()
{
    label->setNum(slider->value());
}