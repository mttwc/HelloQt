#include <QApplication>
#include <QWidget>
#include "spin_box_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SpinBoxDemonstration window;

    window.setWindowTitle("Spin Box Demonstration");
    window.show();

    return app.exec();
}