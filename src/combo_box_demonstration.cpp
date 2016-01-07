#include <QHBoxLayout>
#include "combo_box_demonstration.h"

ComboBoxDemonstration::ComboBoxDemonstration(QWidget *parent)
    : QWidget(parent)
{
    QStringList distros = { "Arch", "Xubuntu", "Redhat", "Debian", "Mandriva" };
    
    QHBoxLayout *hbox = new QHBoxLayout(this);
    
    combo = new QComboBox();
    combo->addItems(distros);
    
    hbox->addWidget(combo);
    hbox->addSpacing(15);
    
    label = new QLabel("Arch", this);
    hbox->addWidget(label);
    
    connect(combo, static_cast<void(QComboBox::*)(const QString &)>(&QComboBox::activated), label, &QLabel::setText);
}