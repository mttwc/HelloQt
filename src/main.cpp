#include <QApplication>
#include <QWidget>
#include "combo_box_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ComboBoxDemonstration window;

    window.setWindowTitle("Combo Box Demonstration");
    window.show();

    return app.exec();
}