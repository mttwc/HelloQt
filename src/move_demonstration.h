#ifndef MOVE_DEMONSTRATION_H
#define MOVE_DEMONSTRATION_H

#include <QWidget>
#include <QMoveEvent>

class MoveDemonstration : public QWidget
{
    public:
        MoveDemonstration(QWidget *parent = 0);
        
    protected:
        void moveEvent(QMoveEvent *e);
};

#endif