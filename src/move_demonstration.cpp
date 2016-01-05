#include "move_demonstration.h"

MoveDemonstration::MoveDemonstration(QWidget *parent)
    : QWidget(parent)
{
    
}

void MoveDemonstration::moveEvent(QMoveEvent *e)
{
    // Called when this widget (in this case, the main window) moves (i.e., is dragged)
    int x = e->pos().x();
    int y = e->pos().y();
    
    QString text = QString::number(x) + ", " + QString::number(y);
    
    setWindowTitle(text);
}