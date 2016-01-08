#include "list_demonstration.h"
#include <QVBoxLayout>
#include <QInputDialog>

ListDemonstration::ListDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout();
    vbox->setSpacing(10);
    
    QHBoxLayout *hbox = new QHBoxLayout(this);
    
    lw = new QListWidget(this);
    lw->addItem("The Omen");
    lw->addItem("The Exorcist");
    lw->addItem("Notes on a Scandal");
    lw->addItem("Fargo");
    lw->addItem("Capote");
    
    addBtn = new QPushButton("Add", this);
    renameBtn = new QPushButton("Rename", this);
    removeBtn = new QPushButton("Remove", this);
    removeAllBtn = new QPushButton("Remove All", this);
    
    vbox->setSpacing(3);
    vbox->addStretch(1);
    vbox->addWidget(addBtn);
    vbox->addWidget(renameBtn);
    vbox->addWidget(removeBtn);
    vbox->addWidget(removeAllBtn);
    vbox->addStretch(1);
    
    hbox->addWidget(lw);
    hbox->addSpacing(15);
    hbox->addLayout(vbox);
    
    connect(addBtn, &QPushButton::clicked, this, &ListDemonstration::addItem);
    connect(renameBtn, &QPushButton::clicked, this, &ListDemonstration::renameItem);
    connect(removeBtn, &QPushButton::clicked, this, &ListDemonstration::removeItem);
    connect(removeAllBtn, &QPushButton::clicked, this, &ListDemonstration::clearItems);
    
    setLayout(hbox);
}

void ListDemonstration::addItem()
{
    QString c_text = QInputDialog::getText(this, "Item", "Enter new item");
    QString s_text = c_text.simplified(); // Removes beginning and end whitespace
    
    if (!s_text.isEmpty())
    {
        lw->addItem(s_text);
        int r = lw->count() - 1;
        lw->setCurrentRow(r);
    }
}

void ListDemonstration::renameItem()
{
    QListWidgetItem *curItem = lw->currentItem();
    
    int r = lw->row(curItem);
    QString c_text = curItem->text();
    QString r_text = QInputDialog::getText(this, "Item", "Enter new item", QLineEdit::Normal, c_text);
    
    QString s_text = r_text.simplified();
    
    if (!s_text.isEmpty())
    {
        QListWidgetItem *item = lw->takeItem(r); // Removes and returns item. Needs to be deleted manually. 
        delete item;
        lw->insertItem(r, s_text);
        lw->setCurrentRow(r);
    }
}

void ListDemonstration::removeItem()
{
    int r = lw->currentRow();
    
    if (r != -1)
    {
        QListWidgetItem *item = lw->takeItem(r);
        delete item;
    }
}

void ListDemonstration::clearItems()
{
    if (lw->count() != 0)
    {
        lw->clear();
    }
}