#ifndef KEY_PRESS_DEMONSTRATION_H
#define KEY_PRESS_DEMONSTRATION_H

#include <QWidget>
#include <QKeyEvent>

class KeyPressDemonstration : public QWidget
{
    public:
        KeyPressDemonstration(QWidget *parent = 0);
        
    protected:
        void keyPressEvent(QKeyEvent *e);
};

#endif