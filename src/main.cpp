#include <QApplication>
#include <QWidget>
#include "plus_minus_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    PlusMinusDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("PlusMinus Demonstration");
    window.show();

    return app.exec();
}