#include <memory>
#include <QWidget>
#include <QFrame>
#include <QGridLayout>
#include "cursor_demonstration.h"

CursorDemonstration::CursorDemonstration(QWidget *parent)
    : QWidget(parent) {

    // We can't use smart pointers here as the garbage collector will delete the objects
    // from memory as soon as the constructor is finished. Perhaps later in the tutorial
    // we will learn some best practices regarding this.

    // We create a frame in *this* window
    QFrame *frame1 = new QFrame(this);
    frame1->setFrameStyle(QFrame::Box);
    frame1->setCursor(Qt::SizeAllCursor);

    QFrame *frame2 = new QFrame(this);
    frame2->setFrameStyle(QFrame::Box);
    frame2->setCursor(Qt::WaitCursor);

    QFrame *frame3 = new QFrame(this);
    frame3->setFrameStyle(QFrame::Box);
    frame3->setCursor(Qt::PointingHandCursor);

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(frame1, 0, 0);
    grid->addWidget(frame2, 0, 1);
    grid->addWidget(frame3, 0, 2);

    setLayout(grid);
}