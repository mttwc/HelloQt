#ifndef LABEL_DEMONSTRATION_H
#define LABEL_DEMONSTRATION_H

#include <QLabel>

class LabelDemonstration : public QWidget
{
    public:
        LabelDemonstration(QWidget *parent = 0);
        
    private:
        QLabel *label1;
        QLabel *label2;
};

#endif