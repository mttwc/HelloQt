#ifndef TIMER_DEMONSTRATION_H
#define TIMER_DEMONSTRATION_H

#include <QWidget>
#include <QLabel>

class TimerDemonstration : public QWidget
{
    public:
        TimerDemonstration(QWidget *parent = 0);
        
    protected:
        void timerEvent(QTimerEvent *e);
        
    private:
        QLabel *label;
};

#endif