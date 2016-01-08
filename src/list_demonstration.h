#pragma once

#include <QWidget>
#include <QPushButton>
#include <QListWidget>

class ListDemonstration : public QWidget
{
    Q_OBJECT
    
    public:
        ListDemonstration(QWidget *parent = 0);
        
    private slots:
        void addItem();
        void renameItem();
        void removeItem();
        void clearItems();
        
    private:
        QListWidget *lw;
        QPushButton *addBtn;
        QPushButton *renameBtn;
        QPushButton *removeBtn;
        QPushButton *removeAllBtn;
};