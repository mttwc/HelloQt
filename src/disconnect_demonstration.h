#ifndef DISCONNECT_DEMONSTRATION_H
#define DISCONNECT_DEMONSTRATION_H

#include <QWidget>
#include <QPushButton>

class DisconnectDemonstration : public QWidget
{
    Q_OBJECT
    
    public:
        DisconnectDemonstration(QWidget *parent = 0);
        
    private slots:
        void onClick();
        void onCheck(int);
        
    private:
        QPushButton *clickBtn;
};

#endif