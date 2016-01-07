#pragma once

#include <QWidget>
#include <QSpinBox>

class SpinBoxDemonstration : public QWidget
{
    public:
        SpinBoxDemonstration(QWidget *parent = 0);
        
    private:
        QSpinBox *spinbox;
};