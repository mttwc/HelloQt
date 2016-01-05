#include <QApplication>
#include "key_press_demonstration.h"

KeyPressDemonstration::KeyPressDemonstration(QWidget *parent)
    : QWidget(parent)
{
    
}

void KeyPressDemonstration::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
    {
        qApp->quit();
    }
}