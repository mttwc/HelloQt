#include <QApplication>
#include <QWidget>
#include "status_bar_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    StatusBarDemonstration window;

    window.resize(300, 200);
    window.setWindowTitle("Status Bar Demonstration");
    window.show();

    return app.exec();
}