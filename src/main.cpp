#include <QApplication>
#include <QWidget>
#include "button_layout_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ButtonLayoutDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Button Layout Demonstration");
    window.show();

    return app.exec();
}