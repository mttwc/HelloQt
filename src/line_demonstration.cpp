#include <QPainter>
#include "line_demonstration.h"

LineDemonstration::LineDemonstration(QWidget *parent)
    : QWidget(parent)
{
}

// Called whenever the widget is updated
void LineDemonstration::paintEvent(QPaintEvent *e)
{
    Q_UNUSED(e);
    
    QPainter qp(this);
    drawLines(&qp);
}

void LineDemonstration::drawLines(QPainter *qp)
{
    QPen pen(Qt::black, 2 /* thickness */, Qt::SolidLine);
    qp->setPen(pen);
    qp->drawLine(20, 40, 250, 40); // (x: 20, y: 40) to (x: 250, y: 40)
    
    pen.setStyle(Qt::DashLine);
    qp->setPen(pen);
    qp->drawLine(20, 80, 250, 80);
    
    pen.setStyle(Qt::DashDotLine);
    qp->setPen(pen);
    qp->drawLine(20, 120, 250, 120);
    
    pen.setStyle(Qt::DotLine);
    qp->setPen(pen);
    qp->drawLine(20, 160, 250, 160);
    
    pen.setStyle(Qt::DashDotDotLine);
    qp->setPen(pen);
    qp->drawLine(20, 200, 250, 200);
    
    QVector<qreal> dashes;
    qreal space = 4;
    
    // dash pattern must be even number of qreal values. odd are dashes, even are spaces.
    dashes << 1 << space << 5 << space;
    
    pen.setStyle(Qt::CustomDashLine);
    pen.setDashPattern(dashes);
    
    qp->setPen(pen);
    qp->drawLine(20, 240, 250, 240);
}