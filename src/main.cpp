#include <QApplication>
#include <QWidget>
#include "button_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ButtonDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Button Demonstration");
    window.show();

    return app.exec();
}