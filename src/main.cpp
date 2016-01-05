#include <QApplication>
#include <QWidget>
#include "key_press_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    KeyPressDemonstration window;

    window.resize(250, 150);
    window.setWindowTitle("Key Press Demonstration");
    window.show();

    return app.exec();
}