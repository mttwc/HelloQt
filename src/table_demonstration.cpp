#include <QHBoxLayout>
#include <QTableWidget>
#include "table_demonstration.h"

TableDemonstration::TableDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QTableWidget *table = new QTableWidget(25, 25, this);
    hbox->addWidget(table);
}