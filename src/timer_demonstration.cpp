#include "timer_demonstration.h"
#include <QHBoxLayout>
#include <QTime>

TimerDemonstration::TimerDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->setSpacing(5);
    
    label = new QLabel("", this);
    hbox->addWidget(label, 0, Qt::AlignLeft | Qt::AlignTop);
    
    QTime qtime = QTime::currentTime();
    QString stime = qtime.toString();
    label->setText(stime);
    
    // Generates a QTimerEvent every 1000ms
    startTimer(1000);
}

void TimerDemonstration::timerEvent(QTimerEvent *e)
{
    // Indicates to the compiler that the param is not used in the body of the function. Done to surpress compiler warnings.
    Q_UNUSED(e);
    
    QTime qtime = QTime::currentTime();
    QString stime = qtime.toString();
    label->setText(stime);
}