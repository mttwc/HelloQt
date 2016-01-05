#include <QApplication>
#include <QWidget>
#include "move_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    MoveDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Move Event Demonstration");
    window.show();

    return app.exec();
}