#include <QApplication>
#include <QWidget>
#include "list_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    ListDemonstration window;

    window.setWindowTitle("List Demonstration");
    window.show();

    return app.exec();
}