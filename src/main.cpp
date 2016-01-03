#include <QApplication>
#include <QWidget>
#include "vertical_box_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VerticalBoxDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("VerticalBox Demonstration");
    window.show();

    return app.exec();
}