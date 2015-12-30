#ifndef PLUS_MINUS_DEMONSTRATION_H
#define PLUS_MINUS_DEMONSTRATION_H

#include <QWidget>
#include <QLabel>

class PlusMinusDemonstration : public QWidget
{
    // Needed in classes that define slots
    Q_OBJECT
    
    public:
        PlusMinusDemonstration(QWidget *parent = 0);

    // 'slots' keyword needed to define slots
    private slots:
        void OnPlus();
        void OnMinus();
        
    private:
        QLabel *lbl;
        int num;
};

#endif