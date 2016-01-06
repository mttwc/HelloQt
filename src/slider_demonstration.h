#pragma once

#include <QWidget>
#include <QSlider>
#include <QLabel>

class SliderDemonstration : public QWidget
{
    Q_OBJECT
    
    public:
        SliderDemonstration(QWidget *parent = 0);
    
    // Used in the alternative way of connecting shown in slider_demonstration.cpp
    private slots:
        void onSliderChanged();
    
    private:
        QSlider *slider;
        QLabel *label;
};