#include <QApplication>
#include <QWidget>
#include "label_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    LabelDemonstration window;

    window.setWindowTitle("Label Demonstration");
    window.show();

    return app.exec();
}