#include <QApplication>
#include <QWidget>
#include "cursor_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    CursorDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Cursor Demonstration");
    window.show();

    return app.exec();
}