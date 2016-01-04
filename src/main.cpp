#include <QApplication>
#include <QWidget>
#include "form_demonstration.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    FormDemonstration window;

    window.setWindowTitle("Form Layout Demonstration");
    window.show();

    return app.exec();
}