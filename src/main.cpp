#include <QApplication>
#include <QWidget>
#include "nesting_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    NestingDemonstration window;

    window.setWindowTitle("Nesting Layout Demonstration");
    window.show();

    return app.exec();
}