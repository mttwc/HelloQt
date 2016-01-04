#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include "form_demonstration.h"

FormDemonstration::FormDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QLineEdit *nameEdit = new QLineEdit(this);
    QLineEdit *addrEdit = new QLineEdit(this);
    QLineEdit *occpEdit = new QLineEdit(this);
    
    QFormLayout *formLayout = new QFormLayout;
    // Horizontally, align right. Vertically, align center.
    formLayout->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
    formLayout->addRow("Name:", nameEdit);
    formLayout->addRow("Email:", addrEdit);
    formLayout->addRow("Occupation:", occpEdit);
    
    setLayout(formLayout);
}