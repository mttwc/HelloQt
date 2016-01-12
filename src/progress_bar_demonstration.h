#pragma once

#include <QWidget>
#include <QProgressBar>
#include <QPushButton>

class ProgressBarDemonstration : public QWidget
{
    Q_OBJECT
    
    public:
        ProgressBarDemonstration(QWidget *parent = 0);
        
    private:
        int progress;
        QTimer *timer;
        QProgressBar *pbar;
        QPushButton *startBtn;
        QPushButton *stopBtn;
        static const int DELAY = 200;
        static const int MAX_VALUE = 100;
        
        void updateBar();
        void startTimer();
        void stopTimer();
};