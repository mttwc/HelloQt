#include <QApplication>
#include <QWidget>
#include "disconnect_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    DisconnectDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Disconnect Demonstration");
    window.show();

    return app.exec();
}