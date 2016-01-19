#pragma once

#include <QWidget>

class LineDemonstration : public QWidget
{
    public:
        LineDemonstration(QWidget *parent = 0);
        
    protected:
        void paintEvent(QPaintEvent *event);
        void drawLines(QPainter *qp);
};