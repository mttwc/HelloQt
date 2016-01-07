#include <QApplication>
#include <QWidget>
#include "line_edit_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LineEditDemonstration window;

    window.setWindowTitle("Line Edit Demonstration");
    window.show();

    return app.exec();
}