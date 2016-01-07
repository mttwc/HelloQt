#pragma once

#include <QWidget>
#include <QComboBox>
#include <QLabel>

class ComboBoxDemonstration : public QWidget
{
    public:
        ComboBoxDemonstration(QWidget *parent = 0);
        
    private:
        QComboBox *combo;
        QLabel *label;
}; 