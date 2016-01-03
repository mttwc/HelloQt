#include <QApplication>
#include <QWidget>
#include "simple_menu_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SimpleMenuDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("SimpleMenu Demonstration");
    window.show();

    return app.exec();
}