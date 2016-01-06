#include <QApplication>
#include <QWidget>
#include "timer_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    TimerDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Timer Demonstration");
    window.show();

    return app.exec();
}