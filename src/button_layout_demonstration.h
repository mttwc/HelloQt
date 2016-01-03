#ifndef BUTTON_LAYOUT_DEMONSTRATION_H
#define BUTTON_LAYOUT_DEMONSTRATION_H

#include <QWidget>
#include <QPushButton>

class ButtonLayoutDemonstration : public QWidget
{
    public:
        ButtonLayoutDemonstration(QWidget *parent = 0);
        
    private:
        QPushButton *okBtn;
        QPushButton *applyBtn;
};

#endif