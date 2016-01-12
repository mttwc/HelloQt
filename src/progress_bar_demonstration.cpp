#include "progress_bar_demonstration.h"
#include <QTimer>
#include <QGridLayout>

ProgressBarDemonstration::ProgressBarDemonstration(QWidget *parent)
    : QWidget(parent)
{
    progress = 0;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &ProgressBarDemonstration::updateBar);
    
    QGridLayout *grid = new QGridLayout(this);
    grid->setColumnStretch(2, 1);
    
    pbar = new QProgressBar();
    grid->addWidget(pbar, 0, 0, 1, 3);
    
    startBtn = new QPushButton("Start", this);
    connect(startBtn, &QPushButton::clicked, this, &ProgressBarDemonstration::startTimer);
    grid->addWidget(startBtn, 1, 0, 1, 1);
    
    stopBtn = new QPushButton("Stop", this);
    connect(stopBtn, &QPushButton::clicked, this, &ProgressBarDemonstration::stopTimer);
    grid->addWidget(stopBtn, 1, 1, 1, 1);
}

void ProgressBarDemonstration::startTimer()
{
    if (progress > MAX_VALUE)
    {
        progress = 0;
        pbar->setValue(0);
    }
    
    if (!timer->isActive())
    {
        startBtn->setEnabled(false);
        stopBtn->setEnabled(true);
        timer->start(DELAY); // The timeout signal is emitted every DELAY milliseconds
    }
}

void ProgressBarDemonstration::stopTimer()
{
    if (timer->isActive())
    {
        startBtn->setEnabled(true);
        stopBtn->setEnabled(false);
        timer->stop();
    }
}

void ProgressBarDemonstration::updateBar()
{
    progress++;
    
    if (progress <= MAX_VALUE)
    {
        pbar->setValue(progress);
    }
    else
    {
        timer->stop();
        startBtn->setEnabled(true);
        stopBtn->setEnabled(false);
    }
}