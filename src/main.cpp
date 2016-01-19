#include <QApplication>
#include <QWidget>
#include "line_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LineDemonstration window;
    
    window.resize(280, 270);
    window.setWindowTitle("Line Demonstration");
    window.show();

    return app.exec();
}