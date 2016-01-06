#include <QApplication>
#include <QWidget>
#include "slider_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    SliderDemonstration window;

    window.setWindowTitle("Slider Demonstration");
    window.show();

    return app.exec();
}