#pragma once

#include <QMainWindow>
#include <QPushButton>

class StatusBarDemonstration : public QMainWindow
{
    Q_OBJECT
    
    public:
        StatusBarDemonstration(QWidget *parent = 0);
        
    private slots:
        void onOkPressed();
        void onApplyPressed();
        
    private:
        QPushButton *okBtn;
        QPushButton *aplBtn;
};